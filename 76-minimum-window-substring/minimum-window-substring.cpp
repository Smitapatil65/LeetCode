class Solution {
public:
    string minWindow(string s, string t) {
      if(s.length()<t.length()) return "";

      unordered_map<char,int>mpT,winmp;
      for(char d:t)
      {
        mpT[d]++;
      }
      
      int req=mpT.size();
      int formed=0;

      int left=0,right=0;
      int minLen=INT_MAX;
      int start=0;

    while(right<s.length())
    {
        char c=s[right];
        winmp[c]++;

        if(mpT.count(c) && winmp[c]==mpT[c])
        formed++;

        while(left <= right && formed==req)
        {
            if(right-left+1<minLen)
            {
                minLen=right-left+1;
                start=left;
            }
            char ch=s[left];
            winmp[ch]--;

            if(mpT.count(ch) && winmp[ch]<mpT[ch])
            formed--;

            left++;
        }
         right++;
    }
    return minLen==INT_MAX?"":s.substr(start,minLen);
    }
};