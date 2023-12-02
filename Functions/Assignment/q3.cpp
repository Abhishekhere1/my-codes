/* Q: Given two numbers a and b, write a function to print all odd numbers between them.*/
#include<iostream>
using namespace std;
void print(int a, int b){
    if(a>b) print(b,a);
    for(int i = a; i <= b ; i++){
        cout<<i<<" ";

    }
}
    int main(){
        int a;
        cout<<"Enter first number : ";
        cin>>a;
        int b;
        cout<<"Enter second number : ";
        cin>>b;
        print(a,b);
    }
