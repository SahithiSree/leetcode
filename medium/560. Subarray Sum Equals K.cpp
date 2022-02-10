class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int sum = 0;
        int cnt = 0;
        
        m[0] = 1;
        
        for (auto n : nums) {
            sum += n;
            
            if (m.count(sum-k)) {
                cnt += m[sum-k];
            }
            
            m[sum]++;
        }
        
        return cnt;
    }
};

***********************************************************
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int currSum = 0;
        int i = 0;
        int count = 0;
        while(i < n){
            currSum += nums[i];
            
            if(currSum == k){
                count += 1;
            }
            if(mpp.find(currSum-k) != mpp.end())
                count += mpp[currSum-k];
            
            mpp[currSum] += 1;
            i += 1;
        }
        return count;
    }
};
