class Solution {
private:
    bool checkPossible(multiset<int> ms,int k,vector<int> &ans){
        while(!ms.empty()){
            int el=*ms.begin();
            int higher=el+2*k;
            if(ms.find(higher)==ms.end()){
                return false;
            }
            //erase iterators and do not erase elements
            //as there might be multiple occurrences
            ms.erase(ms.begin());
            auto it=ms.find(higher);
            ans.push_back(el+k);
            ms.erase(it);
        }
        return true;
    }
public:
    vector<int> recoverArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        multiset<int> ms(nums.begin(),nums.end());
        int n=nums.size();
        int lowest=nums[0];
        for(int i=1;i<n;i++){
            vector<int> ans;
            int highest =nums[i];
            if((highest-lowest) %2 ==0){
                int k=(highest -lowest)/2;
                if(k && checkPossible(ms,k,ans)){
                    return ans;
                }
            }
            
        }
        
       return {}; 
    }
};
