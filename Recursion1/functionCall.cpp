#include<iostream>
using namespace std;
void fun(){
    cout<<"Hello PW"<<endl;
    fun();
}
int main(){
    fun();
}