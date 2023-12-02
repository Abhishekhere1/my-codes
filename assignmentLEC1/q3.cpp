// //Ques: How much space does following data types take ?

// int
// bool
// float

// answer:

// The amount of memory space taken by data types can vary based on the specific system architecture and compiler being used. However, I can provide you with the typical memory sizes for these data types on most common systems:

// int: Typically takes 4 bytes (32 bits) on most modern systems.
// bool: Typically takes 1 byte, but its actual size is dependent on the compiler's implementation. It's usually used as 1 byte for ease of storage and alignment.
// float: Typically takes 4 bytes (32 bits) and represents a single-precision floating-point number.
// Keep in mind that the sizes I mentioned are common but not guaranteed. The C++ standard only defines the minimum size requirements for each data type, allowing compilers to choose larger sizes if needed. You can use the sizeof operator to determine the size of a specific data type on your system:


#include<iostream>
using namespace std;
int main(){
    cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
}



