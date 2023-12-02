/*Write a function to print squares of first n natural numbers, taking n as argument to the function*/
#include<iostream>
using namespace std;
void firstNsquares( int n ) {
    for(int i = 1; i<=n ; i++){
        cout<< i*i <<endl ;
    }
}

int main(){
    int n;
    cout<<" Enter n : " ;
    cin>>n;
    firstNsquares(n);


}