// Ques : Take positive integer input and tell if it
// is a three digit number or not.

 #include<iostream>
 using namespace std;
 int main(){
    cout<<"Enter a number : ";
    int n ;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Three Digit Number " ;
    }
    else{
        cout<<"Not a three digit number";
    }

 }