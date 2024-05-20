/*find the minimum value out of all the elements in the array*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,-3,2,-5,-2,6,3};
    int n = sizeof(arr)/4;
    int mn = INT8_MAX;
    for(int i = 0; i<n; i++){
        mn = min(mn,arr[i]);
        // if(arr[i]<mn) mn = arr[i];
    }
    cout<<mn;
}