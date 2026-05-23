class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
     for(int i=2;i<=n;i++)
    {
            string tmp="";
            int count=1;
        for(int j=0;j<ans.size();j++)
        {
            while(j+1<ans.size()&&ans[j]==ans[j+1])
            {
                count++;
                j++;
            }
        tmp+=to_string(count);
        tmp+=ans[j];
        count=1;
        }
        ans=tmp;
    }
        return ans;
    }
};