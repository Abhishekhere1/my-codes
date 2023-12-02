//  #include<iostream>
//  using namespace std;
//  int main(){
//     cout<<"Enter an integer : ";
//     int n;
//     cin>>n;
//     if(n>0){
//       cout<<n;
//     }
//     else{ // n <= 0
//       cout<<-n;
//     }
//  }
 #include<iostream>
 using namespace std;
 int main(){
   cout<<"Enter an integer : ";
   int n;
   cin>>n;
   if(n<0) {
      n = -n ;
   }
   cout<<n ;
   }