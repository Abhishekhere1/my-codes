/*

Q3: Find the output of the following code snippet.
  int a = 10, b = 20;
  int *ptr = &a;
  b = *ptr + 1;
  ptr = &b;
  cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
A) 11 11 10
B) 10 10 10
C) 11 10 11
D) 10 11 10



ANS : (C)

*/

#include<iostream>
using namespace std;
int main(){
  int a = 10, b = 20;
  int *ptr = &a;
  b = *ptr + 1;
  ptr = &b;
  cout << *ptr <<" "<< a <<" "<< b;
}