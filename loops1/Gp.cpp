#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // 1 2 4 8 16 .... n terms
    // 2 6 18 54 ....
    int a = 2;
    for( int i = 1 ; i<= n; i++){
        cout<<a<<endl;
        a = a * 3;
    }
}