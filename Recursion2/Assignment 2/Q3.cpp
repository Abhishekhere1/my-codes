/*
Q3). Given an integer num, return the number of steps to reduce it to zero. In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1
from it. [Leetcode 1342]
*/
#include<iostream>
// #include<cmath>
using namespace std;
int numberOfSteps(int num) {
        //base case
        if(num==0) return 0;
        //recursive case
        if(num==1) return 1;
        //recursive case and add 1 if num is odd else add 2
        return numberOfSteps(num/2)+(num%2==0?1:2);
}
int main(){
  cout<<numberOfSteps(14);
}