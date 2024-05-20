#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}  
    int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    display(v);
    
    // //reverse
    // int i = 0;
    // int j = v.size()-1;
    // while(i<=j){
    //     //swap v[1] and v[2]
    //     int temp = v[1];
    //     v[i] = v[j] ;
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    // display(v);
    
    for(int i = 0, j = v.size()-1; i<=j; i++ , j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    // reverse(v.begin(),v.end());
    display(v);
}