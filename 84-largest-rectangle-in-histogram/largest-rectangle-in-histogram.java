class Solution {
    public int largestRectangleArea(int[] heights) {
        // int n = heights.length;
        // int maxArea = 0;
        // for(int i=0;i<n;i++){
        //     int minH = heights[i];
        //     for(int j=i;j<n;j++){
        //         minH = Math.min(minH,heights[j]);
        //         int w = j-i+1;
        //         maxArea = Math.max(maxArea,minH*w);
        //     }
        // }
        // return maxArea;

        int n = heights.length;
        Stack<Integer> s = new Stack<>();
        int[] nse = new int[n];
        int[] pse = new int[n];

        for(int i = n - 1; i >= 0; i--) {
            while(!s.isEmpty() && heights[s.peek()] >= heights[i]) {
                s.pop();
            }
            if(s.isEmpty()){
                nse[i] = n;
            } 
            else{
                nse[i] = s.peek();
            }
            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        for(int i = 0; i < n; i++) {
            while(!s.isEmpty() && heights[s.peek()] >= heights[i]) {
                s.pop();
            }
            if(s.isEmpty()){
                pse[i] = -1;
            }
            else{
                pse[i] = s.peek();
            }
            s.push(i);
        }

        int maxArea = 0; 
        for(int i=0;i<n;i++){
            int area = heights[i] * (nse[i]-pse[i]-1);
            maxArea = Math.max(area,maxArea);
        }

        return maxArea;
    }
}