class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for(int i=0;i<n;i++){
            char ch = chars[i];
            int count = 0;

            while(i<n && ch==chars[i]){
                count++;
                i++;
            }

            chars[idx++] = ch;

            if(count>1){
                string s = to_string(count);
                for(char c:s){
                    chars[idx++] = c;
                }
            }
            i--;
        }
        return idx;
    }
};