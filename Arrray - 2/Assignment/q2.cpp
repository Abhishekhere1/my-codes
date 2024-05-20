/*WAP to find the largest three elements in the array*/
#include<iostream>
using namespace std;
int main(){
    int n , INT_MIN;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>mx) 
            mx = arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>smx && arr[i] != mx) 
            smx = arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>smx && arr[i] != mx && arr[i] != smx);
            tmx = arr[i];
    }
    cout<<mx<<endl;
    cout<<smx<<endl;
    cout<<tmx<<endl;
}