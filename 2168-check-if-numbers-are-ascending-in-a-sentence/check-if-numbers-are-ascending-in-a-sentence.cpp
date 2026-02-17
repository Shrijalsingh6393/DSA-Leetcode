class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>ans;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                int num = 0;

                while(i<n && s[i]>='0' && s[i]<='9'){
                    num = num * 10 + (s[i]-'0');
                    i++;
                }
                ans.push_back(num);
            }
        }

        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]>=ans[i+1]){
                return false;
            }
        }
        return true;
    }
};