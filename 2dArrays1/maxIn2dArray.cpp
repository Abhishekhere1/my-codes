#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i = 0; i<=m-1; i++){
        for(int j = 0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    //max
    int max = INT_MAX;

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
        
    }
    cout<<max;

}