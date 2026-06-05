class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maximumProfit = 0;
        int profit = 0;

        for(int i=1; i<prices.size(); i++)
        {
            profit = prices[i] - minPrice;
            maximumProfit = max(maximumProfit, profit);
            minPrice = min(minPrice, prices[i]);
        }

        return (maximumProfit);
    }
};
