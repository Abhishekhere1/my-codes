#include<iostream>
using namespace std;
int main(){
    // int x = 7;
    // int* ptr = &x;
    // cout<<ptr<<endl; // 0x60ff08
    // ptr = ptr + 1;
    // cout<<ptr<<endl; // 0x60ff0c


    // bool flag = true;
    // bool* ptr = &flag;
    // cout<<ptr<<endl; //0x60ff0b
    // ptr = ptr + 1;
    // cout<<ptr<<endl; // 0x60ff0c

    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl; //4
    (*ptr)--; // x = x + 1
    cout<<*ptr<<endl;//5
}