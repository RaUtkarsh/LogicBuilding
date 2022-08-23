class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mxProfit = 0;
        int initial = prices[0];
        
        for(int i=0; i<prices.size(); i++){
            int profit = prices[i] - initial;
            
            mxProfit = max(mxProfit, profit);
            
            initial = min(initial, prices[i]);
        }
        
        return mxProfit;
        
    }
};


//Optimized Solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() == 1)
            return 0;
        
        int max = 0, min = prices[0];
        
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            else if((prices[i] - min) > max){
                max = prices[i] - min;
            }
        }
        return max;
    }
};
