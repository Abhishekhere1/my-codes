#include<iostream>
using namespace std;
// int pow(int x, int n){
//     if(n==0) return 1;
//     if(n==1) return x;
//     return x*pow(x,n-1);
// }
// int main(){
//     cout<<pow(3,4);
// }

int pow(int x, int n){
    if(n==1) return x;
    int ans = pow(x,n/2);
    return ans*ans;
}
int main(){
    cout<<pow(3,4);
}