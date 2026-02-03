class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> nge(m);
        stack<int>s;

        for(int i=m-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                nge[i] = -1;
            }
            else{
                nge[i] = s.top();
            }
            s.push(nums2[i]);
        }

        vector<int>ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nge[j]);
                    break;
                }
            }
        }
        return ans;
    }
};