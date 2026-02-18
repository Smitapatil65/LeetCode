class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string tmp;
        stringstream ss(s);
        while(ss>>tmp)
        {
            words.push_back(tmp);
        }
       if(pattern.length()!=words.size())
        return false;

       unordered_map<char,string>mp;
       unordered_map<string,char>mp2;
       for(int i=0;i<pattern.length();i++)
       {
        char ch=pattern[i];
        string word=words[i];
        if(mp.count(ch))
        {
            if(mp[ch]!=word)
             return false;
        }else{
            mp[ch]=word;
        }
        if(mp2.count(word))
        {
            if(mp2[word]!=ch)
             return false;
        }else{
            mp2[word]=ch;
        }
       } 
       return true;
    }
};