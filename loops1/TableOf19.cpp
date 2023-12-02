/*#include<iostream>
using namespace std;
int main(){
    for( int i = 19; i<= 190; i++){
        if( i%19==0)
        cout<<i<<endl;
    }
// 190-19 = 171 baar loop chal raha hai
}
*/

#include<iostream>
using namespace std;
int main(){
    for( int i = 19; i<=190; i=i+19){

        cout<<i<<endl;
    }
}//loop 10 baar chal raha hai