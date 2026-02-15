class Solution {
public:
    vector<string> ans;
    void solve(string &d, int i, string s, vector<string> &v) {
        if(i == d.size()) {
            ans.push_back(s);
            return;
        }

        string letters = v[d[i] - '0'];

        for(int j = 0; j < letters.size(); j++) {
            solve(d, i + 1, s + letters[j], v);
        }
    }

    vector<string> letterCombinations(string digits) {
       if(digits.size() == 0) return {};

        vector<string> v =
        {"", "", "abc", "def", "ghi",
         "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, 0, "", v);

        return ans; 
    }
};