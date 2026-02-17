class Solution {
public:
    vector<vector<string>>ans;
    bool isPalindrome(string s,int st,int e){
        while(st<e){
            if(s[st]!=s[e]){return false;}
            st++;
            e--;
        }
        return true;
    }
    void func(string s,vector<string>&v,int index){
        if(index==s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                v.push_back(s.substr(index,i-index+1));
                func(s,v,i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>v;
        func(s,v,0);
        return ans;
    }
};