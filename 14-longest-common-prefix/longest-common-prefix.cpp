class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs.front();
        string second = strs.back();
        int i=0;
        while(i<=first.length() && first[i]==second[i]) i++;

        return first.substr(0,i);
    }
};