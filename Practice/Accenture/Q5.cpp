/*
Q5. Minimum Number of Integers
You are given a function,
int MinimumNumberOfIntegers (int* arr, int n, int x, int y);

The function accepts an integer array 'arr' of length 'n', an integer 'x' and an integer 'y' as its arguments. Implement the function to count minimum number of integers present between 'x' and 'y' in the given array 'arr' and return the same. Assumption:
 n> 1
Values of 'x' and 'y' are distinct
 If 'x' or 'y' or both are not present in the given array 'arr', return -1

Example:
Input:
x: 3
y: 6
arr: 10 3 2 4 5 6 9 7 3
Output:
2
Explanation:
The count of minimum number of integers between '3' and '6' is 2 (i.e. 9 and 7).

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
  