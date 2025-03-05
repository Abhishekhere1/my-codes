// Baseball Game [Leetcode - 682]

#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int calPoints(vector<string>& ops) {
    stack<int> st;
    int totalScore = 0;

    // Iterate through each operation
    for (const string& op : ops) {
        if (op == "C") {
            // Cancel the last score (pop from stack)
            totalScore -= st.top();
            st.pop();
        }
        else if (op == "D") {
            // Double the last score
            int lastScore = st.top();
            st.push(lastScore * 2);
            totalScore += lastScore * 2;
        }
        else if (op == "+") {
            // Add the sum of the last two scores
            int lastScore = st.top();
            st.pop();
            int secondLastScore = st.top();
            st.push(lastScore);  // Push last score back onto the stack
            st.push(lastScore + secondLastScore);  // Push the sum of last two scores
            totalScore += lastScore + secondLastScore;
        }
        else {
            // Integer value (push it to the stack and add to total score)
            int score = stoi(op);
            st.push(score);
            totalScore += score;
        }
    }

    return totalScore;
}

int main() {
    vector<string> ops = {"5", "2", "C", "D", "+"}; // Sample input
    cout << "Total Score: " << calPoints(ops) << endl; // Output the total score

    return 0;
}
