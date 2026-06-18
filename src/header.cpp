
#include "header.hpp"

practice::practice(){}

practice::practice(std::string name, int m_age):m_name(name),m_age(m_age){
    m_size=0;
    m_ptr=nullptr;
}
practice::practice(std::string name,int m_age,std::initializer_list<int> marks):
  m_name(name),m_age(m_age),m_size(marks.size()){
      m_ptr=std::make_unique<int[]>(m_size);
      std::copy(marks.begin(),marks.end(),m_ptr.get());
      std::cout<<"explicit constructor called "<<std::endl;
  }
  practice::~practice(){
      std::cout<<"destructor called"<<std::endl;
  }
  practice::practice(const practice& copy){ //copy contructor
      std::cout<<"copy constructor called"<<std::endl;
     this->m_name=copy.m_name;
     this->m_age=copy.m_age;
     this->m_size=copy.m_size;
     this->m_ptr=std::make_unique<int[]>(copy.m_size);
      std::copy(copy.m_ptr.get(),copy.m_ptr.get()+copy.m_size,this->m_ptr.get());
  }
  practice::practice(practice&& other) noexcept: m_name(std::move(other.m_name)),
        m_size(other.m_size), m_age(other.m_age),m_ptr(std::move(other.m_ptr)) {
            std::cout<<"Move consturctor called"<<std::endl;

       other.m_size = 0;
     other.m_age = 0;
  }

  practice& practice:: operator=(const practice& copy){
      std::cout<<"copy assignment is called"<<std::endl;
  if(this==&copy) return *this;

   m_name=copy.m_name;
   m_age=copy.m_age;
   m_size=copy.m_size;
   if(copy.m_ptr){
       m_ptr=std::make_unique<int []>(m_size);
       for(int i=0;i<m_size;i++){
           m_ptr[i]=copy.m_ptr[i];
       }
  }
  else {
      m_ptr.reset();
  }
  return *this;
  }
  practice& practice::operator=(practice&& other) noexcept{
      std::cout<<"move assignment is called"<<std::endl;
     this->m_name=std::move(other.m_name);
     this->m_age=other.m_age;
     this->m_size=other.m_size;
     this->m_ptr=std::move(other.m_ptr);
      other.m_size=0;
      other.m_age=0;
      return *this;
  }

  void practice::GetDetails(){
      std::cout<<"Student name:-"<<m_name<<"\n";
      std::cout<<"Student m_age-"<<m_age<<"\n";
      std::cout<<"Student total subject:-"<<m_size<<"\n";
        std::cout<<"Student subject marks are as follows:-"<<m_size<<"\n";
      for(int i=0;i<m_size;i++){
      std::cout<<m_ptr[i]<<"\n";
      }
  }
