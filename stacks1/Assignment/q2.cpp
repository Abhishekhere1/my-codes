// Remove kth element from top in a given stack.
// Hint : Use another stack, just like insertion question.

#include<bits/stdc++.h>
using namespace std;
void removeKthElement(int k , stack<int>&st){
stack<int>st2;
k--;
while(k--){
st2.push(st.top());
st.pop();
}
st.pop();
while(!st2.empty()){
st.push(st2.top());
st2.pop();
}
}
int main(){
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
removeKthElement(3 , st);
}
