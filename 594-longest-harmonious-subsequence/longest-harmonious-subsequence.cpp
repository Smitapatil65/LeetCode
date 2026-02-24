class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int maxLen=0;
       
        for(auto i:nums)
        {
            mp[i]++;
        } 
        
        for(auto i:mp)
        {
          int num=i.first;
          int count1=i.second;

          if(mp.find(num+1)!=mp.end())  
          {
            int count2=mp[num+1];
            maxLen=max(maxLen,count1+count2);
          }
        }
        return maxLen;
      }
};