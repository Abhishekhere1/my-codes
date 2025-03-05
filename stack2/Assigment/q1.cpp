// Valid Parentheses

#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    // Map to store the matching pairs of parentheses
    unordered_map<char, char> matchingParenthesis = {{')', '('}, {']', '['}, {'}', '{'}};

    // Iterate over each character in the string
    for (char c : s) {
        // If the character is a closing parenthesis
        if (matchingParenthesis.find(c) != matchingParenthesis.end()) {
            // If stack is empty or top of the stack doesn't match the corresponding opening parenthesis
            if (st.empty() || st.top() != matchingParenthesis[c]) {
                return false;
            }
            // Pop the top of the stack if it matches
            st.pop();
        } else {
            // If the character is an opening parenthesis, push it onto the stack
            st.push(c);
        }
    }

    // If the stack is empty, all parentheses were matched properly
    return st.empty();
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValid(s)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are not valid." << endl;
    }

    return 0;
}
