class Solution {
public:
    void func(int n,int o,int c,string s,vector<string>&ans){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(o<n){
            func(n,o+1,c,s+"(",ans);
        }
        if(c<o){
            func(n,o,c+1,s+")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        func(n,0,0,"",ans);
        return ans;
    }
};