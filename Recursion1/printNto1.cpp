#include<iostream>
using namespace std;
void print(int n){
    // base case
    if(n==0) return ;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    print(6);
}