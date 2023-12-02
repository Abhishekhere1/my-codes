#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];

    //input
       for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }

    int count = 0 ,x;
    for(int i = 0; i<=n-1 ; i++){
        if(arr[i]>x)
        count++;
    }
    cout<<count;
}

// Ques : Count the number of elements in given array
// greater than a given number x.


/// doubt in this question