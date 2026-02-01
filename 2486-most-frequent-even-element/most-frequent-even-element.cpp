class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
            }
        }

        if(m.empty()) return -1;

        vector<pair<int,int>>p;
        vector<int>ans;

        for(auto el : m){
            p.push_back(el);
        }

        sort(p.begin(),p.end());

        int maxc = 0;
        for(int i=0;i<p.size();i++){
        maxc = max(maxc,p[i].second);
        }

        for(int i=0;i<p.size();i++){
            if(p[i].second==maxc){
            ans.push_back(p[i].first);
            }
        }

        int minA = ans[0];
        for(int i=0;i<ans.size();i++){
            minA = min(minA,ans[i]);
        }

        return minA;
        // int maxf = 0; 
        // int ans = -1;
        // for(auto el : m){
        //     int val = el.first;
        //     int freq = el.second;

        //     if(val % 2 == 0) {
        //         if(freq > maxf || (freq == maxf && val < ans)) {
        //             maxf = freq;
        //             ans = val;
        //         }
        //     }
        // }

        // return ans;
    }
};