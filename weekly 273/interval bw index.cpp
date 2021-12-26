//Input: arr = [2,1,3,1,2,3,3]
//Output: [4,2,7,2,4,4,5]
//Explanation:
//- Index 0: Another 2 is found at index 4. |0 - 4| = 4
//- Index 1: Another 1 is found at index 3. |1 - 3| = 2
//- Index 2: Two more 3s are found at indices 5 and 6. |2 - 5| + |2 - 6| = 7
//- Index 3: Another 1 is found at index 1. |3 - 1| = 2
//- Index 4: Another 2 is found at index 0. |4 - 0| = 4
//- Index 5: Two more 3s are found at indices 2 and 6. |5 - 2| + |5 - 6| = 4
//- Index 6: Two more 3s are found at indices 2 and 5. |6 - 2| + |6 - 5| = 5


class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
       map<int , vector<int>> mpp;
        int len=arr.size();
        for(int i=0;i<len;i++){
            mpp[arr[i]].push_back(i);
        }
        vector<long long> ans(len,0);
        for(auto it : mpp){
            vector<int> indexs=it.second;
            for(int j=0;j<indexs.size();j++){
                long long sum=0;
                for(int k=0;k<indexs.size();k++){
                    sum+=abs(indexs[j]-indexs[k]);
                    
                }
                ans[indexs[j]]=sum;
            }
        }
        return ans;
    }
};
