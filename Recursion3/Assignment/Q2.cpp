/*Write a program to find the sum of all elements in an array using recursion.*/

//recursive appoach
#include<iostream>
#include<climits>
using namespace std;
int sum(int arr[], int n) {
  if (n == 0)
  return 0;
  else
  return arr[n - 1] + sum(arr, n - 1);
  }
  //main function
  int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout << sum(arr, n);
    return 0;
    }