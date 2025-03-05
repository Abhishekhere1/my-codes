// You have a sorted array of infinite numbers, how would you search an element in the array?

#include<iostream>
using namespace std;
int main(){
int a[] = {1,2,4,7,10,12,15,18};
int lo = 0 , hi = 1;
int tgt = 10;
while(a[hi] < tgt){
lo = hi;
hi *= 2;
}
cout<<lo<<" "<<hi<<endl;
bool flag = false;
while(lo <= hi){
int mid = lo + (hi - lo)/2;
if(a[mid] ==tgt){
flag = true;
break;
}
else if(a[mid] > tgt){
hi = mid - 1;
}


}}
