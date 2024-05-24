/*Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.*/
#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            arr[i][j] = 5 ;
        }
        cout<<endl;
    }

    for(int i = 0; i<=4; i++){
        for(int j = 0; j<=4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}