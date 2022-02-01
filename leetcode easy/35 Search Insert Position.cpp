//4ms
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),i;
        for(i=0;i<n;i++){
            if(nums[i]>=target){
                
                break;
                
            }
        }
        return i;
    }
};
**************************
//0ms
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            if (target < nums[low]) {
                return low;
            } else if (target > nums[high]) {
                return high + 1;
            }
            int mid = low + (high - low) / 2;
            if (target == nums[mid]) {
                return mid;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else if (target > nums[mid]) {
                low = mid + 1;
            }
        }
        return low;
    }
};
