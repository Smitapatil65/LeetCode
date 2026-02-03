class Solution {
public:
    int missingNumber(vector<int>& a) {
      int x1=0,x2=0;
      int N=a.size();
     
      for(int i=0;i<N;i++)
      {
        x2=x2^a[i];
        x1=x1^i;
      }
       x1=x1^N;
       return x1^x2;
    }
};