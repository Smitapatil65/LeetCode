class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>sub1;
        int left=0;
        int ml=0;

        for(int i=0;i<s.size();i++)
        {
            sub1[s[i]]++;
            while(sub1[s[i]]>1)
            {
                sub1[s[left]]--;
                left++;
            }
            ml=max(ml,i-left+1);
        }
      return ml ;
    }
};