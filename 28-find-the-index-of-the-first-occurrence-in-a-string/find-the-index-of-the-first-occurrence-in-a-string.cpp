class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = haystack.find(needle);

        if(i!=-1){
            return i;
        }
        else{
            return -1;
        }
    }
};