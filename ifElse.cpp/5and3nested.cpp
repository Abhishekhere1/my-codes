// Ques : Take positive integer input and tell if it
// is divisible by 5 and 3.


#include<iostream>
 using namespace std;
 int main(){
    cout<<"Enter an integer : ";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"The number is divisible by 5 and 3 both ";
        }
        else{
            cout<<"Number is divisible by 5 but not 3";
        }
    }
    else{
        cout<<"Not matching condition ";
    }
 }