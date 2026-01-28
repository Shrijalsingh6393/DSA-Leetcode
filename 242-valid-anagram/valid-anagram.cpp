class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        if(s.length() != t.length()){
            return false;
        }


        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
        }

        for(int i=0;i<t.length();i++){
            m2[t[i]]++;
        }

        
        for(auto el : m1){
            if(m2[el.first] != el.second){
                return false;
            }
        }

        return true;
    }
};