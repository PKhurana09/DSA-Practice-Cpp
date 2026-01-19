// Given an array arr of n integers, where arr[i] represents price of the stock on the ith day. Determine the maximum profit achievable by buying and selling the stock at most once. 
// The stock should be purchased before selling it, and both actions cannot occur on the same day.

// Best time to buy and sell the stock

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int maxProfit(vector<int>& prices);

int main(void){
    vector<int> exp  = {5, 4, 3, 2, 1};

    cout << "Output is: " << maxProfit(exp) << endl;
    return EXIT_SUCCESS;
}

int maxProfit(vector<int>& prices){
    int min = prices[0];
    int profit = 0;

    int n = prices.size();

    for(int i = 0; i != n; ++i){
        if(prices[i] < min){
            min = prices[i];
        }

        if(prices[i] - min > profit){
            profit = prices[i] - min;
        }
    }

    return profit;
}

