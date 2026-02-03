class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        vector<int>nse(n); 
        vector<int>pse(n);

        for(int i = n - 1; i >= 0; i--) {
            while(!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if(s.empty()) nse[i] = n; 
            else nse[i] = s.top();
            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        for(int i = 0; i < n; i++) {
            while(!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if(s.empty()) pse[i] = -1;
            else pse[i] = s.top();
            s.push(i);
        }

        int maxArea = 0; 
        for(int i=0;i<n;i++){
            int area = heights[i] * (nse[i]-pse[i]-1);
            maxArea = max(area,maxArea);
        }

        return maxArea;
    }
};