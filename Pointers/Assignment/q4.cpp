/*

Q4: Find the output of the following code snippet.
  int a = 15, b = 20;
  int *ptr = &a;
  int *ptr2 = &b;
  *ptr = *ptr2;
A) ptr now points to b
B) ptr2 now points to a
C) a gets value of b
D) b gets value of a


ANS (A)
*/

#include<iostream>
using namespace std;
int main(){
  int a = 15, b = 20;
  int *ptr = &a;
  int *ptr2 = &b;
  *ptr = *ptr2;
}