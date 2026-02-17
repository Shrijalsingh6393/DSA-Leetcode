class Solution {
public:
    vector<string>ans;
    void func(string digits,vector<string>&v,int index,string s){
        if(index==digits.length()){
            ans.push_back(s);
            return;
        }
        string letters = v[digits[index]-'0'];
        for(int i=0;i<letters.size();i++){
            func(digits,v,index+1,s+letters[i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return {};
        }
        vector<string>v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        func(digits,v,0,"");
        return ans;
    }
};