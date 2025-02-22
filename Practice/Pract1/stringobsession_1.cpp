#include<bits/stdc++.h>
using namespace std;

// to calculate max substr removed
int maxSS_remove(const vector<string>& ss, string mainSt, unordered_map<string, int>& memo)
{

// checking map for already computed result
if(memo.find(mainSt)!=memo.end())
{
return memo[mainSt];
}

int maxCount = 0;
for(const string& substring : ss)
{
size_t pos = mainSt.find(substring);
if(pos!=string::npos)
// remove first occurence of substr and create new str

{
string newStr = mainSt.substr(0,pos) + mainSt.substr(pos + substring.size());

// calculate the result
maxCount = max(maxCount, 1 + maxSS_remove(ss, newStr, memo));
}
}

//store  the result in memoization chart
memo[mainSt] = maxCount;
return maxCount;

}

int main()
                 {
                   int N;
                   cin>>N;
                   vector<string> ss(N);
                   for(int i=0; i<N; i++){
                     cin>>ss[i];
                   }
                   
                   string mainSt;
                   cin>>mainSt;
                   
                   //memoization map
                   unordered_map<string, int> memo;
                   
                   // output the max no of substr that can be removed
                   cout<<maxSS_remove(ss, mainSt, memo);
                   return 0;
               }