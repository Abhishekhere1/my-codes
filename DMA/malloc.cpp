//C++ program to demonstrate working of malloc()

//cstdlib is used to use malloc function
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
  //size_t is an integer data type which can assign
  // greater than or equal to 0 integer value
  size_t s=0; // s is SIZE

  //malloc declaration/initialization
  int* ptr = (int*)malloc(s);

  // return condition if the memory block is initialized
  if(ptr==NULL){
    cout<<"Null pointer has been returned";
  }

  //Condition printing the message if the memory is initialize
  else{
    cout<<"Memory has been allocated at address "<<ptr<<endl;

  }
  free(ptr);
  return 0;
}
