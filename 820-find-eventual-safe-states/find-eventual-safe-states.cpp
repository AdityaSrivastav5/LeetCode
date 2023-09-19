class Solution {
private:
    bool dfs(int node,vector<vector<int>>& graph,vector<int> &vis
    ,vector<int> &pathvis,vector<int> &check){
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0;
        for(auto i:graph[node]){
            if(!vis[i]){
                if(dfs(i,graph,vis,pathvis,check)==true){
                    check[node]=0;
                    return true;
                }
            }
            else if(pathvis[i]){ 
                check[node]=0;
                return true;
            }
        }
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) { 
        vector<int> vis(graph.size(),0);
        vector<int> check(graph.size(),0);
        vector<int> pathvis(graph.size(),0);
        vector<int>ans;
        for(int i=0;i<graph.size();i++){
            if(!vis[i]){
               dfs(i,graph,vis,pathvis,check);
            }
        }
        for(int i=0;i<graph.size();i++){
            if(check[i]==1) ans.push_back(i);
        }
        return ans;
    }
};