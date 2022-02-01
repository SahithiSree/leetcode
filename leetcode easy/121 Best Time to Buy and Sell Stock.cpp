//256ms
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n= prices.size();
        int maxp = 0;
        int minval = INT_MAX;
        for(int i =0;i<n;i++){
            minval = min(prices[i],minval);
            maxp= max(maxp,prices[i] - minval);
        }
        return maxp;
    }
};
******************************************
//112ms
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int min = INT_MAX;
        int maxProfit = 0;
        for (const auto& price : prices)
        {
            min = std::min(min, price);
            maxProfit = std::max(maxProfit, price - min);
        }
        return maxProfit;
    }
};

***********************************************************
//116ms
class Solution {
public:
    int maxProfit(vector<int> prices) {
        int n = prices.size();
        int answer = INT_MIN;   
        int x_min = INT_MAX;
        //int x_max = INT_MIN;
        for(int i=0;i<n;i++){
            x_min = min(prices[i],x_min);
            answer = max(answer, prices[i] - x_min);
        }
        if(answer < 0 ){
            return 0;
        }
        return answer;
    }
};
