class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int sum=0;
        int maxLen=0;
        mp[0]=-1;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
           if(nums[i]==0)
            sum+=-1;
           else
            sum+=1;

           if(mp.find(sum)!=mp.end())
           {
            maxLen=max(maxLen,i-mp[sum]);
           }else{
            mp[sum]=i;
           }
        }
       return maxLen;
    }
};