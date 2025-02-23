/*Print all the elements of an array in reverse order using recursion*/

#include<iostream>
using namespace std;

// Recursive function to print the elements of the array in reverse order
void printReverse(int arr[], int start, int n){
  //base case: if start index is out of bounds, return 
  if(start>=n){
    return;
  }
  //recursive call: Print the reverse of the remaining arrayy elements 
  printReverse(arr, start+1, n);
    //Print the current element after the recursive call
    cout<<arr[start]<<" ";
  
}
int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
  cin >> arr[i];
  }

  cout<<"The elements of the array in reverse order are: ";
  printReverse(arr, 0, n);
  cout<<endl;
  return 0;
}
