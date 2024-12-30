// Best Time to Buy and Sell Stocks
// QUESTION
// You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// EXAMPLE
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Input: prices = [7,6,4,3,1]
// Output: 0
// ANSWER HERE

#include <iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    int minPrice = prices[0]; // Initialize the minimum price as the first day's price
    int maxProfit = 0; // Initialize the maximum profit to 0

    for (int i = 1; i < n; i++) {
        // If we can sell at a higher price than the minimum price seen so far
        maxProfit = max(maxProfit, prices[i] - minPrice);

        // Update the minimum price if a new lower price is found
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}

int main() {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    cout << "Maximum Profit: " << maxProfit(prices1, n1) << endl;

    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);
    cout << "Maximum Profit: " << maxProfit(prices2, n2) << endl;

    return 0;
}
