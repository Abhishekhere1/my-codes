/*
Q4. There are n stairs, and a person standing at the bottom wants to climb the stairs to reach the nth stair. The person can climb either 1,2, or 3 stairs at a time. Write a program to count the number of ways the person can reach the top using recursion.
*/

#include<iostream>
using namespace std;
 
// Function to count the number of ways to reach the nth stair
int countWays(int n){
    if(n==0){
        return 1; // One way to stay at the ground (do nothing)
    }

    if(n<0){
        return 0; // No way to go below the ground
    }
    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main(){
    int n;
    cout<<"Enter the number of stairs:";
    cin>>n;

    int ways = countWays(n);
    cout<<"Number of ways to reach the top: "<<ways <<endl;

    return 0;
}