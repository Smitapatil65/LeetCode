class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      int n=nums.size();
      unordered_map<int,int>mp;
      vector<int>v;
      for(auto i:nums)
      {
        mp[i]++;
      }
      for(auto i:mp)
      {
        if(i.second>1)
        {
            v.push_back(i.first);
        }
        
      }
      return v;
    }
};