/*
Q2).Write a program to calculate the reverse of a given positive integer using recursion.
*/

#include<iostream>
#include<cmath>

using namespace std;
// Helper function to calculate the number of digits in n
int numberOfDigits(int n){
  
  if(n==0){
     return 0;
  }
  return 1 + numberOfDigits(n/10);
}
// function to calculate the reverse of a number using recursion
int reverseNumber(int n, int digits){
   if(n==0){
      return 0;
   }
   return(n%10)*pow(10,digits-1) + reverseNumber(n/10, digits-1);
}
int main(){
   int n;
   cout<<"Enter a positive integer: ";
   cin>>n;

   int digits = numberOfDigits(n);
   int reversedNumber = reverseNumber(n,digits);

   cout<<"The reverse of "<<n<<"is:"<<reversedNumber<<endl;

   return 0;
}
