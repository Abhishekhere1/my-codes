/*Write a function to count the number of digits in a number and then print the square of this number.*/
#include<iostream>
using namespace std;
int squareOfCount(int n){
    int count = 0 ;
    while(n!=0){
        n /= 10;
        count++;
    }
    return count*count;
}
int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<squareOfCount(n);
}