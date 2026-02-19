class Solution {
public:
    bool isAlphanum(char c){
        if((c>='0' && c<='9') || (tolower(c)>='a' && tolower(c)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length()-1;

        while(st<end){
            if(!isAlphanum(s[st])){
                st++;
                continue;
            }
            if(!isAlphanum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end])){return false;}
            st++;
            end--;
        }
    return true;
    }
};