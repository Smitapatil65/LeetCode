class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        double op;
        for(auto i:nums1)
        {
          ans.push_back(i);
        }
         for(auto i:nums2)
        {
          ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        int s=ans.size();
        double k;
        if(s%2!=0)
        {
             k=s/2;
            op=ans[k];
        }else
        {
           k=s/2;
           op=(ans[k]+ans[k-1])/2.0;
           //op=((double)ans[k]+ans[k-1])/2.0;
        }
        return op;
    }
};