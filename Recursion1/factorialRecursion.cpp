// Make a function which calculates the factorial of n using recursion.
#include<iostream>
using namespace std;
int factorial(int n){
    // base case : if n is 0 or 1, factorial is 1
    if(n<=1){
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else{
        return n * factorial(n - 1);
    }
}
int main(){
    int number;
    cin>>number;
    if(number < 0){
        cout<<"factorial is not defined for negative numbers."<<endl;
    }
    else{
        cout<<"Factorial of "<<number<<" is "<<factorial(number)<<endl;
    }

    return 0;
}

