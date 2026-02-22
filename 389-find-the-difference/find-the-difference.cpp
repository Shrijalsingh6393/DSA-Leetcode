class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>m;
        for(char x : s){
            m[x]++;
        }
        for(char y : t){
            m[y]--;
        }

        for(auto el : m){
            if(el.second<0){
                return el.first;
            }
        }
        return 'a';
    }
};