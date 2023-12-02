#include<iostream>
using namespace std;
int maxthree(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c && b>a){
        return b;
    }
    else return c;
}
int main(){
    int a = 200, b = 9, c = 79;
    cout<<maxthree(a,b,c);
}