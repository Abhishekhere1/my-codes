#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<string, int> m;
  pair<string, int> p1;
  p1.first = " raghav";
  p1.second = 76;
  pair<string, int> p2;
  p2.first = "harsh";
  p2.second = 15;
  pair<string, int> p3;
  p3.first = "lokesh";
  p3.second = 49;
  m.insert(p1);
  m.insert(p2);
  m.insert(p3);
  for(auto /*or you hsould write instead pair<string, int>*/ p : m){
    cout<<p.first<<" "<<p.second<<endl;
  }

}