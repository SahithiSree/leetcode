class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if (nums[i]+nums[j]==target){
                    arr.push_back(i);
                    arr.push_back(j);
                    
                }
                
            }
           
        }
            
       
        return arr;
    }
};

*************************************************more efficient******************************************************
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>arr(2);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if (nums[i]+nums[j]==target){
                    arr[0]=i;
                    arr[1]=j;
                    
                }
                
            }
           
        }
            
       
        return arr;
    }
};
