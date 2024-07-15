/*
Q2.Write a program to print the sum of all odd numbers from a to b (inclusive) using
recursion.
*/

#include<iostream>
using namespace std;

//function to calculate the sum of all odd numbers from a to b usingrecursion
int sumOddNumbers(int a, int b){
    if(a>b){
        return 0;
    }
    if(a%2!=0){
        return a + sumOddNumbers(a+1, b);
    }else{
        return sumOddNumbers(a+1, b);
    }
}
int main(){
    int a,b;
    cout<<"Enter the start number(a): ";
    cin>>a;
    cout<<"Enter the start number(b): ";
    cin>>b;

    int sum = sumOddNumbers(a,b);
    cout<<"Sum of all Odd numbers from"<< a <<" to "<< b <<"is:"<<sum<<endl;

    return 0;
    
}