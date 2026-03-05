class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector<string>ans;
       int i=0;

        for(int num=1;num<=n;num++)
        {
            ans.push_back("Push");
            if(num==target[i])
            {
                i++;
            }else{
                ans.push_back("Pop");
            }
            if(i==target.size())
            {
                break;
            }
        }
        
            return ans;
    }
  
};