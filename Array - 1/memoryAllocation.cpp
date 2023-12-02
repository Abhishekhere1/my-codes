#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
// 0x60fefc
// 0x60fefc
// 0x60ff00
// 0x60ff04
// 0x60ff08
// 0x60ff0c
}