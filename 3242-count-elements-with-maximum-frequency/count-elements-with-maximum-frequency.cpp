class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int x:nums)
        {
            freq[x]++;
        }

        int mF=0;
        for(auto it:freq)
        {
          mF=max(mF,it.second);
        }
        
        int ans=0;
        for(auto it:freq)
        {
            if(it.second==mF)
            {
                ans+=it.second;
            }
        }
      return ans;
    }
};