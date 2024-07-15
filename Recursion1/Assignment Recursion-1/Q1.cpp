/*
Q1. Print an increasing-decreasing sequence using recursion
Example:
If n = 5, the output should be:
1 2 3 4 5 4 3 2 1
*/

#include<iostream>
using namespace std;


// Function to Print increasing sequence
void printIncreasing(int i, int n){
    if(i>n){
     return; 
    }
    cout<<i<<" "<<endl;
    printIncreasing(i+1,n);
    
}


// Function to Print decreasing sequence
void printDecreasing(int i){
    if (i < 1) {
    return;
    }  
      cout<<i<<" "<<endl;
    printDecreasing(i-1); 
}



// combined function to print increasing and decreasing sequence
void printSequence(int n){
    printIncreasing(1,n);
    printDecreasing(n-1);
    cout<<endl;
    }


int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Increasing-Decreasing Sequence: ";
    printSequence(n);

    return 0;
}