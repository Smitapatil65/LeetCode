class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int maxC=0;

        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
        }
       maxC=count;
        for(int i=k;i<s.length();i++)
        {
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
            {
                count--;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
            maxC=max(maxC,count);
        }
       return maxC;
    }
};