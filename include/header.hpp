  #ifndef HEADER_HPP
#define HEADER_HPP
#include<string>
#include<memory>
#include<cstddef>
#include <initializer_list>
#include<iostream>

class practice {
    public:
        practice();   //constructor

        practice(std::string name,int m_age,std::initializer_list<int> marks);
        practice(std::string name, int m_age);

       ~practice();    //destructor

       practice(const practice& copy); //copy constructor

       practice( practice&& other) noexcept; //move constructor


      practice& operator=(const practice& copy); // copy assigment oprator

      practice& operator=(practice&& other) noexcept; //move assigment operator

      void GetDetails();




    private:
        std::string m_name;
        int m_age;
        size_t m_size;
        std::unique_ptr<int[]> m_ptr;

};


#endif
