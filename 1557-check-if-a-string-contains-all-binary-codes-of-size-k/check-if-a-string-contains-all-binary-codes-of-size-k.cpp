class Solution {
public:
    bool hasAllCodes(string s, int k) {
      int n=s.size();
      if(n<k) return false;

      unordered_set<string>mp;
      for(int i=0;i<=n-k;i++)
      {
        string sub=s.substr(i,k);
        mp.insert(sub);
      }
     
     return mp.size()==(1<<k);
    }
};