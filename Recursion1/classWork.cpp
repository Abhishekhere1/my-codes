// Question : Print Good Morning 'n' no of times, where 'n' is user input
#include<iostream>
using namespace std;
void PrintGM(int n){
    if(n==0) {
        return;
    }
    cout<<"Good Morning"<<endl;
    PrintGM(n-1);
}
int main(){
    int n;
    cin>>n;
    PrintGM(n);
    return 0;
}