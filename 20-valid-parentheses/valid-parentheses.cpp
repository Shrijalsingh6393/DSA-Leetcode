class Solution {
public:
    bool isValid(string str) {
        stack<char>st;

        for(char c : str) {
        if(c == '('){
            st.push(')');
        }
        else if(c == '{'){
            st.push('}');
        }
        else if(c == '['){
            st.push(']');
        }
        else {
            if(st.empty() || st.top() != c) return false;
            st.pop();
            }
        }

        return st.empty();

    }
};