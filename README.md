# C++ Rule of 5 & RAII Practice

A minimalist C++ project demonstrating modern memory management, Resource Acquisition Is Initialization (RAII), and the **Rule of 5**. 

## Overview
This repository contains a simple `practice` class that tracks a student's name, age, and dynamically allocated marks. It serves as a practical implementation of custom copy and move semantics to ensure safe and efficient resource handling without memory leaks.

## Concepts Demonstrated
* **Rule of 5 Implementation:**
  * **Destructor:** Safely cleans up resources.
  * **Copy Constructor:** Performs a deep copy of dynamically allocated arrays.
  * **Move Constructor:** Efficiently transfers ownership of resources (pointers) without reallocating memory.
  * **Copy Assignment Operator:** Handles self-assignment checks and deep copying.
  * **Move Assignment Operator:** Transfers resources and nullifies the source object.
* **Modern C++ Memory Management:** Utilizes `std::unique_ptr<int[]>` for dynamic array allocation instead of raw pointers (`new`/`delete`).
* **Initializer Lists:** Uses `std::initializer_list` for clean and intuitive object instantiation.

## Building the Project
This project is configured using CMake. To build and run the code from your terminal, use the following commands:

```bash
# Create a build directory
mkdir build
cd build

# Generate build files and compile
cmake ..
make

#run on your local machine
./cppLEARN
