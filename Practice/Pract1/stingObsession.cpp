#include<bits/stdc++.h>
using namespace std;

int maxSS_remove(const vector<string>& ss, string mainSt, unordered_map<string, int>& memo) {

    if (memo.find(mainSt) != memo.end()) {
        return memo[mainSt];
    }

    int maxCount = 0;
    for (const string& substring : ss) {
        size_t pos = mainSt.find(substring);
        if (pos != string::npos) {

            string newString = mainSt.substr(0, pos) + mainSt.substr(pos + substring.size());

            maxCount = max(maxCount, 1 + maxSS_remove(ss, newString, memo));
        }
    }


    memo[mainSt] = maxCount;
    return maxCount;
}

int main() {
    int n;
    cin >> n;

    vector<string> ss(n);
    for (int i = 0; i < n; i++) {
        cin >> ss[i];
    }

    string mainSt;
    cin >> mainSt;

    unordered_map<string, int> memo;

    cout << maxSS_remove(ss, mainSt, memo) << endl;

    return 0;
}
