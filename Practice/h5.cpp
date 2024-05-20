
#include<iostream>
using namespace std;
int main(){

       int x, y ;
       int* p1 = &x;
       int* p2 = &y;
       cin>>*p1;
       cin>>*p2;
       int a1 , b1 ;
       a1 = *p1 + *p2;
       b1 = *p1 - *p2;
       cout<<a1<<endl;
     


    // Ensure result is positive
    if (b1 < 0) {
        b1 = - b1; // Make the result positive
    }

    // Display the positive result
    cout <<b1 << endl;
   

}
