#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int num, rem, temp, i=0, deci=0;
  cout<<"Enter any binnay number: ";
  cin>>num;
  temp=num;
  while(temp>0){
    rem = temp%10;
    deci = deci + rem * pow(2,i);
    i++;
    temp = temp/10;
}
cout<<"Decimal number "<<deci;
return 0;
}









// 2nd method

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string s = "1011";
//   int n = s.length();
//   int base = 1;
//   int ans = 0;
//   for(int i=n-1; i>=0; i--){
//     if(s[i]=='1'){
//       ans += base;
//     }
//     base *= 2;
//   }
//   cout<<ans<<endl;
// }


