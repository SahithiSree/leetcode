//2ms
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),temp=0;
        for(int i=0;i<n;i++){
           
            if(nums[i]!=val){
               nums[temp]=nums[i];
               temp++;
            }
         
        }
        
        return temp;
    }
};
*****************************************************
//4ms

class Solution {
public:
    
       int removeElement(vector<int>& nums, int val) {
        int ptr1=-1,ptr2=0;
        while(ptr2<nums.size()){
            if(nums[ptr2]==val){
                ptr2++;
            }else{
                int tmp=nums[++ptr1];
                nums[ptr1]=nums[ptr2];
                nums[ptr2++]=tmp;
            }
        }
        return ptr1+1;
    }
};
