/*

Q5: Is the following program snippet correct?

  int a = 10, b = 20;
  int *ptr;
  *ptr = 5;


ANS : The program is correct and will compile but might result in runtime error.This is
because ptr will have a garbage address which might even point to a location which
does not belong to our program and hence might result in Segmentation Fault when we
are trying to access it.




*/

#include<iostream>
using namespace std;
int main(){
int a = 10, b = 20;
int *ptr;
*ptr = 5;
}

