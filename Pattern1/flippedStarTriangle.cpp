#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows : ";
    cin>>n;
    int k = 1;
    // for(int i=1; i<=n; i++){
    //     //spaces
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     // stars
    //     for( int k=1; k<=i; k++){
    //            cout<<"*";
    //     }
    //     cout<<endl;
    // }
for( int i = 1; i<=n; i++){
    for( int j=1; j<=n; j++){
        if((i+j)>=n+1) 
        cout<<"*";
        else
          cout<<" ";
    }
    cout<<endl;
}
}