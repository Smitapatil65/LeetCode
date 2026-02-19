class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int ans=-1;
        unordered_map<int,int>mp;
        for(auto x:arr)
        {
            mp[x]++;
        }
        for(auto i:mp)
        {
            if(i.first==i.second)
            {
             ans=max(ans,i.first);
            } 
        }
        return ans;
    }
};