class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && height[i]>=height[s.top()]){
                int mid = s.top();
                s.pop();
                if(s.empty()){break;}
                int left = s.top();
                int width = i-left-1;
                int boundedHeight = min(height[i],height[left])-height[mid];
                water += width*boundedHeight;
            }
            s.push(i);
        }
        return water;
    }
};