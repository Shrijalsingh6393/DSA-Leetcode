class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        map<string,int>m;
        vector<string>ans;

        for(int i=0;i<n;i++){
            m[words[i]]++;
        }

        vector<pair<string,int>>v;

        for(auto el : m){
            v.push_back(el);
        }

        sort(v.begin(),v.end(),[](pair<string,int>&a,pair<string,int>&b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });

        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};