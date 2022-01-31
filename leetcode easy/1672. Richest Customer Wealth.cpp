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
