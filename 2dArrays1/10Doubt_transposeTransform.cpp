#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows/columns : ";
    cin>>m;
    int arr[m][m];
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n";

    //print
    for(int i=0; i<=m-1; i++){ // rows
        for(int j=0; j<=m-1; j++){ // col
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;
    //transpose in the same matrix
    for(int i=0; i<=m-1; i++){ \\ rows
        for(int j = i+1; j<=m-1; j++){ // col
             //swapping of i,j and j,i
             int temp = arr[i][j];
             arr[i][j] = arr[j][i];
             arr[j][i] = temp;
        }
    }


    //print
    for(int i=0; i<=m-1; i++){ // rows
        for(int j=0; j<=m-1; j++){ //col
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}