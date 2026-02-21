class Solution {
public:
    int lengthOfLongestSubstring(string str) {
       unordered_set<char>s;
       int l = 0;
       int maxLen = 0;
       for(int i=0;i<str.length();i++){
        while(s.find(str[i])!=s.end()){
            s.erase(str[l]);
            l++;
        }
        s.insert(str[i]);
        maxLen = max(maxLen,i-l+1);
       } 
       return maxLen;
    }
};