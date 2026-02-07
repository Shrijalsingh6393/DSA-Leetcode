class Solution {
public:
    string func(string s){
        int i = 0;
        while(i < s.size() && s[i] == ' ') i++;
        s = s.substr(i);

        int pos = s.find(' ');
        if(pos==string::npos){return s;}

        string first = s.substr(0,pos);
        string rest = s.substr(pos+1);

        string res = func(rest);

        if(res.size() == 0) return first;
        return res + " " + first;
    }
    string reverseWords(string s) {
        return func(s);
    }
};