#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
   v.push_back(3);
   v.push_back(1);
   v.push_back(2);
   v.push_back(6);
   v.push_back(9);
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";

    }
}