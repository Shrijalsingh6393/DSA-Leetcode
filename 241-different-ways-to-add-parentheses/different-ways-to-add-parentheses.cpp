class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> result;
        
        for(int i = 0; i < expression.length(); i++) {
            
            char op = expression[i];
            
            if(op == '+' || op == '-' || op == '*') {
                
                string leftPart = expression.substr(0, i);
                string rightPart = expression.substr(i + 1);
                
                vector<int> leftResults = diffWaysToCompute(leftPart);
                vector<int> rightResults = diffWaysToCompute(rightPart);
                
                for(int l : leftResults) {
                    for(int r : rightResults) {
                        
                        if(op == '+') result.push_back(l + r);
                        else if(op == '-') result.push_back(l - r);
                        else if(op == '*') result.push_back(l * r);
                    }
                }
            }
        }
        
        // Base case: only number
        if(result.empty()) {
            result.push_back(stoi(expression));
        }
        
        return result;
    }
};