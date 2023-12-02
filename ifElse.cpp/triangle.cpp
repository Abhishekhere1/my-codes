// Ques : Take 3 numbers input and tell if they
// can be the sides of a triangle.
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 1st side : ";
    cin>>a;
    cout<<"Enter 2nd side : ";
    cin>>b;
    cout<<"Enter 3rd side : ";
    cin>>c;
    if((a+b>c)  &&  (b+c>a)   &&  (c+a>b)){
        cout<<a<<","<<b<<","<<c<<" can be the sides of a triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
    }