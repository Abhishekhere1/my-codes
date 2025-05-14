/*
Q3. Problem Statement: Sum of leaders of an Array
Implement the following function:
int SumOfLeaders (int arr[], int n);

The function accepts a positive integer array 'arr' of size 'n' as its argument. Implement the function to find the leaders in the array and return their sum. An element is leader in the array if it greater than all the elements to its right side. The rightmost element is always a leader. 
Assumption: 'arr' contains distinct elements.
Note:
If 'arr' is empty or None (in case of python), return -1 
Output lies within integer r

Input:
arr: 52 66 64 36 45 24 32
Output:
207
Explanation:
Leaders of array are {66, 64, 45, 32). Sum
= 66+64 +45 + 32 = 207. Thus, output is 207.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n ;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
    
  }

  int sum=0;
  for(int i=0; i<n; i++){
    sum += arr[i];
    
  }

  cout<< sum;
  return 0;

  
}