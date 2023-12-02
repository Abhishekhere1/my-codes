// Ques: WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char a , b ;
    cout<<"enter the first character : ";
    cin>>a;
    cout<<" enert the second character : ";
    cin>>b;
    int asciiDiff = static_cast<int>(a) - static_cast<int>(b);
    cout<<" The difference between ASCII values : "<< asciiDiff <<endl;

}