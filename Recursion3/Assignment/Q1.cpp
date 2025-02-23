/* Write a program to find the minimum element of an array using recursion.*/

// //iterative approach

// #include <iostream>
// using namespace std;

// int minElement(int arr[], int n) { // Function takes an array and its size
//     int min = arr[0]; // Initialize with the first element
//     for (int i = 1; i < n; i++) { // Start from index 1
//         if (arr[i] < min) { // Compare correctly
//             min = arr[i];
//         }
//     }
//     return min; // Return minimum element
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n]; // Declare array
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i]; // Input values
//     }

//     cout << "The minimum element of the array is: " << minElement(arr, n) << endl;
//     return 0;
// }


//recursive appoach
#include<iostream>
#include<climits>
using namespace std;

// Recursive function to find the minimum element in an array
int findMin(int arr[], int n){
  // Base case: If the array has only one element, return that element
  if (n == 1)
  return arr[0];

  // Recursive case: Find the minimum of the rest of the array and compare it with the first
  int restMin = findMin(arr+1, n-1);

  //Return the minimum of the first element and the minimum of the rest
  return (arr[0]<restMin)?arr[0] : restMin;
  
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    cout << "The minimum element of the array is: " << findMin(arr, n)<<endl;
    return 0;
    }
    
