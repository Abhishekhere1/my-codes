/* WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements . */



#include<iostream>
using namespace std;
int main() {
cout<<"enter 5 elements of the array"<<endl;
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];
}
int x=0,n;
bool flag=false;
for(int i=0;i<n;i++){
if(a[i]!= x){
cout<<x<<endl;
flag=true;
break;
}
else x++;
}
if(flag==false) cout<<x<<endl;
return 0;
}