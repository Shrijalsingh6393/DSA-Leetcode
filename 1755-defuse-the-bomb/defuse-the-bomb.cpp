class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        
        if(k == 0) return result; // all zeros if k == 0
        
        for(int i = 0; i < n; i++) {
            int sum = 0;
            
            if(k > 0) {
                // sum next k elements
                for(int j = 1; j <= k; j++) {
                    sum += code[(i + j) % n]; // wrap around using %
                }
            } else {
                // sum previous |k| elements
                for(int j = 1; j <= -k; j++) {
                    sum += code[(i - j + n) % n]; // wrap around backward
                }
            }
            
            result[i] = sum;
        }
        
        return result;
    }
};