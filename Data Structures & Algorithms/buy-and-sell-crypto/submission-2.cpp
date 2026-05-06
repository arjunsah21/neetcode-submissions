class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = 1, profit = 0, n = prices.size();
        
        while (sell < n) {
            if (prices[buy] < prices[sell]) {
                int temp = prices[sell] - prices[buy];
                profit = max(temp, profit);
            } else {
                buy = sell;
            }
            sell++;
        }
        
        return profit;
    }
};
