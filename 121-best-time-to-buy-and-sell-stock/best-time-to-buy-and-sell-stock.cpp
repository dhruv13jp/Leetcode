class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minsofar = prices[0];
        int maxprofit;
        for(int i=0;i<n;i++){
            minsofar = min(minsofar,prices[i]);
            int profit = prices[i]-minsofar;
            maxprofit = max(maxprofit,profit);
        }
        if(n==1){
            return prices[0]-prices[0];
        }
        return maxprofit;
    }
};