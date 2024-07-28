/*
Q1).  Write a program to calculate the sum of the digits of a given positive integer using
recursion.
*/

#include<iostream>
using namespace std;

void sumPositive(int sum, int n){
  // base case
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    if(n<0){
        cout<<"The given number is negative";
        return;
    }
    // recursive call
    sumPositive(sum+n,n-1);
}
int main(){
    sumPositive(0,5);
}