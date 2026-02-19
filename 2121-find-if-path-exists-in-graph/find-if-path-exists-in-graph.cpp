class Solution {
public:
    bool dfs(int i,vector<bool>&vis,vector<int>adj[],int d){
        if(i==d){return true;}
        vis[i] = true;
        for(int x : adj[i]){
            if(!vis[x]){
                if(dfs(x,vis,adj,d)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        vector<int>adj[n];
        
        for(auto el : edges){
            int u = el[0];
            int v = el[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>vis(n,false);

        if(dfs(s,vis,adj,d)){
            return true;
        }
        return false;
    }
};