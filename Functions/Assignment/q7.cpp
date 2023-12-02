/*
Q  :  Can the same function name be used for different functions without any conflict?
*/
//   CASE 1

// #include<iostream>
// using namespace std;
// void great(){
//     cout<<"Hi";
// }
// void great(){
//     cout<<"Hello";
// }
// int main(){
//     great();
// }
/*
agar dono ka return type same ho
name same ho
argument same ho to phir function run nahi karega

*/



/* 

     CASE 2

#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<<a+b;
}
void sum(int a, int b, int c){
    cout<<a+b+c;
}
int main(){
    sum(3,8,2);
}



run karega agar number of agument ek ka badha de to
*/


// finally answer is Solution :
// The same function name can be used for different functions without any conflict if
// and only if they either have different data types for arguments or different number
// of arguments. Same function names cannot be used if functions differ only by their
// return type because the compiler would not then know which function is to be used.
