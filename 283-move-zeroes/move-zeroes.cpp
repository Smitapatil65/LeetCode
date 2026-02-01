class Solution {
public:
    void moveZeroes(vector<int>& a) {
      int j=0;
      int n=a.size();
      for(int i=0;i<n;i++)
      {
        if(a[i]!=0)
        {
            if(i!=j){
              swap(a[i],a[j]);
            }
           j++;
        }
      }
     
    } 
};