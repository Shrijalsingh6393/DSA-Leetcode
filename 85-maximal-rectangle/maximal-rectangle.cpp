class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> height(m, 0);
        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == '1')
                    height[j] += 1;
                else
                    height[j] = 0;
            }

        stack<int> st;
            
        for(int j = 0; j <= m; j++) {
                
            int currHeight = (j == m) ? 0 : height[j];

            while(!st.empty() && currHeight < height[st.top()]) {
                    
                int h = height[st.top()];
                    st.pop();

                    int width;
                    if(st.empty())
                        width = j;
                    else
                        width = j - st.top() - 1;

                    maxArea = max(maxArea, h * width);
                }

                st.push(j);
            }
        }

        return maxArea;
    }
};