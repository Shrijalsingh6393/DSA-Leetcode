class Solution {
public:
    vector<vector<string>>ans;

    bool isPalindrome(string &s, int l, int r) {
        while(l < r) {
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    void func(string &s,int index,vector<string>&v){
        if(index==s.size()){
            ans.push_back(v);
            return;
        }

        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
            v.push_back(s.substr(index, i - index + 1));
            func(s,i+1,v);
            v.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string>v;
        func(s,0,v);

        return ans;
    }
};