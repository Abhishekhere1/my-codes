// Final Prices with a Special Discount in a Shop [Leetcode - 1475]


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    stack<int> st;
    int n = prices.size();
    
    // Traverse through the list of prices
    for (int i = 0; i < n; i++) {
        // Apply discount if possible by checking the stack
        while (!st.empty() && prices[st.top()] >= prices[i]) {
            int index = st.top();
            st.pop();
            prices[index] -= prices[i];  // Apply the discount
        }
        // Push the current index onto the stack
        st.push(i);
    }
    
    return prices;
}

int main() {
    vector<int> prices = {8, 4, 6, 2, 3}; // Sample input
    vector<int> result = finalPrices(prices);
    
    // Output the final prices after applying discounts
    cout << "Final prices: ";
    for (int price : result) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
