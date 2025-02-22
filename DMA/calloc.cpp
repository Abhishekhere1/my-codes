//Including header 
#include<cstdlib>
#include <iostream>
using namespace std;

int main(){

  //Allocatong memory block
  int* ptr = (int*)calloc(10, sizeof(int));

  //Checking for failure
  if(!ptr){
    cout<<" Failed to allocated memory\n";
    exit(1);
  }


  // Initialize allocated memory
  for(int i=0; i<10; i++){
    ptr[i] = i;
  }

  //Printing allocated ,memory
  for(int i=0; i<10; i++){
    ptr[i] = i;
  }

  //Printing allocated memory
  for(int j=0; j<10; j++){
    cout<<*(ptr+j)<<endl;
  }

  // ptr[i] and *(ptr+i) are same 

  //Deallocating allocated memory 
  free(ptr);

  return 0;
}