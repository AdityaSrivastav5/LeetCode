class Solution {
public:
    void dfs(vector<vector<int>>& adj,vector<int>&vis,int node){
        vis[node]=1;
        for(auto i:adj[node]){
            if(!vis[i]) dfs(adj,vis,i);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        vector<vector<int>>adj(n);
        for(auto i : connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj,vis,i);
                count++;
            }
        }
        return count-1;
    }
};