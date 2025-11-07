class Solution {
public:
   vector<int>pick(vector<int>&nums,int k)
   {
    vector<int>st;
    int remove=nums.size()-k;
    for(int x:nums)
    {
        while(!st.empty()&&remove>0 && st.back()<x)
        {
            st.pop_back();
            remove--;
        }
        st.push_back(x);
    }
    st.resize(k);
    return st;
   }
    bool bigger(vector<int>&a,int i,vector<int>&b,int j)
    {
        while(i<a.size() && j<b.size() && a[i]==b[j])
        {i++;j++;}
        return j==b.size()||(i<a.size()&&a[i]>b[j]);
    }
    vector<int> merge(vector<int>a,vector<int>b)
    {
        vector<int>res;
        int i=0,j=0;
        while(i<a.size()||j<b.size())
        {
            if(bigger(a,i,b,j))res.push_back(a[i++]);
            else res.push_back(b[j++]);
        }
        return res;
    }
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int>best;
        for(int x=max(0,k-(int)nums2.size());x<=min(k,(int)nums1.size());x++)
        {
            vector<int>part1=pick(nums1,x);
            vector<int>part2=pick(nums2,k-x);
            vector<int>candidate=merge(part1,part2);

            if(best.empty()||bigger(candidate,0,best,0))
             best=candidate;
        }
      return best;
    }
};