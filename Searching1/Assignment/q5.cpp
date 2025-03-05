// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45

// Output 2: no

#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int num) {
int low = 1 , high = num;
while(low <= high){
long long int mid = low + (high - low)/2;
if((long long int)mid*mid == num)return true;
else if((long long int)mid*mid < num)low = mid + 1;
else high = mid - 1;
}
return false;
}
int main(){
int n;
cin>>n;
isPerfectSquare(n) ? cout<<"Yes" : cout<<"No";
}

