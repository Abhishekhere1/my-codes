/*Ques: WAP for finding the volume of cylinder by taking radius and height as input.

*/
#include<iostream>
using namespace std;
int main(){
    float r, h, pi = 3.1415 , v=pi*r*r*h;
    cout<<"enter radius r : "<<endl;
    cin>>r;
    cout<<"enter height h : "<<endl;
    cin>>h;
    cout<<" volume of cylinder  is : "<< v <<endl;
}