//credits:https://leetcode.com/problems/subsets/discuss/1766969/C%2B%2B-oror-100-faster-solution-(0-ms)-oror-Bit-Manipulation-oror-Easy-to-understand
000 -> Empty set

001 -> 1

010 -> 2

011 -> 12

100 -> 3

101 -> 13

110 -> 23

111 -> 123
  
***************************************************************************************************
  class Solution {
public:
    void findsub( vector<vector<int>> &res , vector<int> nums , int i){
        int j = 0;
        vector<int>v;
        while(i>0){
            if((i&1)==1) v.push_back(nums[j]);
            j++;
            i = i>>1;
        }
        res.push_back(v);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> res;
        int n = nums.size();
        for(int i = 0 ; i < (1<<n) ;i++){
            findsub(res,nums,i);
        }
        return res;
    }
};
