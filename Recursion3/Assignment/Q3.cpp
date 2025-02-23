/*Write a program to find the index of a given element in an array using recursion. If the
element is present, return its index; otherwise, return -1.*/

#include<iostream>
using namespace std;
 //Recursive function to find the index of a given element in the array
 int findIndex(int arr[], int n, int target, int index) {
  //Base case: If the index is equal to n, it means the target element is not
  //present in the array, so return -1
  if (index == n) {
    return -1;
    }
    //If the current element is equal to the target, return the current index
    if (arr[index] == target) {
      return index;
    }
    //Recursive call for the next element in the array
    return findIndex(arr, n, target, index + 1);
    }

    int main() {
      int n ,target;
      cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"Enter the element to find: ";
    cin>>target;
    int result = findIndex(arr, n, target, 0);
    if (result != -1) {
      cout << "Element found at index " << result << endl;
    }
    else {
      cout << "Element not found in the array" << endl;
      }
      return 0;
    }


