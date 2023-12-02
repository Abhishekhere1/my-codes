// Ques : Take 3 positive integers input and print
// the greatest of them.

#include<iostream>
 using namespace std;
 int main(){
    int a, b, c;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    cout<<"Enter third number";
    cin>>c;
    if(a>b){
            if(a>c){
                cout<<a<<"the greatest number is ";
            }
            else{ // c > a , a > b -> c > a > b
                cout<<c<<"the greatest number is";
            }
        }
    
 
 else{ // b > a
    if( b > c ){
        cout<<b<<" is greatest ";
    }
    else{
        cout<<c<<" is greatest";
    }
   
 }
 }
    
 