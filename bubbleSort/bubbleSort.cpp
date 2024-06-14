#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[8] = {5,-4,0,3,35,56,2,1};
    int n = 8;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // bubble sort
    for(int i=0; i<n; i++){
        //traverse
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){  // swap
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j], arr[j+1]); //builtin function


            }
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}