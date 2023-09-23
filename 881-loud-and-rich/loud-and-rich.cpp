class Solution {
public:
    int dfs(int node, vector<int> adj[],vector<int>& quiet,vector<int>& ans){
        if(ans[node]!=-1){
            return ans[node];
        }
        else{
            ans[node]=node;
            for(auto i:adj[node]){
                int paisa=dfs(i,adj,quiet,ans);
                if(quiet[paisa]<quiet[ans[node]]){
                    ans[node]=paisa;
                }
            }
        }
        return ans[node];
    }
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n= quiet.size();
        vector<int> adj[n];
        for(auto i: richer){
            adj[i[1]].push_back(i[0]);
        }
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            dfs(i,adj,quiet,ans);
        }
        return ans;
    }
};