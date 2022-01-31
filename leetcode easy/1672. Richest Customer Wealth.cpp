
//5ms
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int s=0,n=accounts.size(),max=0,sum[n];
         for (int i = 0; i <n ; i++) {
             for (int j = 0; j < accounts[i].size(); j++){
                 s=s+accounts[i][j];
             }
             sum[i]= s;
             s=0;
         }
        for(int i=0;i<n;i++){
            if(sum[i]>max){
                max=sum[i];
            }
        }
       return max;
    }
};

**********************************************************************************

//4ms


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int sum=INT_MIN;
        for(int row=0;row<accounts.size();row++){
            int curr_sum=0;
            for(int col=0;col<accounts[row].size();col++){
                curr_sum=curr_sum+accounts[row][col];
                sum=max(curr_sum,sum);       
            }
        }
        return sum;
    }
};
