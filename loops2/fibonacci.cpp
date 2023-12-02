#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int  a = 1,  b = 1, sum = 0;
    for( int i = 1; i<=n-2; i++){
         sum = a + b;
         a = b;
         b = sum;
    }
    cout<<b;
}
// fibonacci series - 1 1 2 3 5 8 13 21 34 55
//         nth term - 1 2 3 4 5 6  7  8  9 10