#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // printing in reverse order -> emptying the stack 
    while(st.size()>0){
      cout<<st.top()<<" ";
      st.pop();
    }

} 



/*stack notes
time complexity of get insert delete is O(n)
 and space complexity os get insert delete is O(n) 


stack size is unlimited

*/ 