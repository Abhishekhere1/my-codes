#include<iostream>
using namespace std;
int fat(int n){
    // base call
    if(n==1) return 1;
    // recursive call
    return n*fact(n-1);
}
int main(){
    cout<<fact(5);
} 