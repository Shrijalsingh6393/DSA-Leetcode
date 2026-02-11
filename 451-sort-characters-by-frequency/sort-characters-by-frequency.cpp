class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(auto el : s){
            m[el]++;
        }
        priority_queue<pair<int,char>>pq;

        for(auto el : m){
            pq.push({el.second,el.first});
        }

        string ans;

        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            ans.append(top.first,top.second);
        }
        return ans;
    }
};