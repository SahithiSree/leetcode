class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
         unordered_map<int,int> a;
        for(int i:nums)
            a[i]++;
        int count=0;
        for(auto x:a)
        {
            if(k==0)
            {    
                if(x.second>1)
                count++;
            }
             else if(a.find(x.first+k)!=a.end())
                count++;
        }
        
        return count;
    }
};
