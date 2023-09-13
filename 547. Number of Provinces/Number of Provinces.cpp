class Solution {
private:
    void dfs(int start,vector<int>adj[],int vis[]){
      vis[start]=1;
        for(auto i:adj[start]){
            if(!vis[i]){
                dfs(i,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
      int V=isConnected.size();
      vector<int>adjls[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);  
                }
            }
        }
        int vis[V];
        for(int i=0;i<V;i++) vis[i]=0;
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(i,adjls,vis);
            }
        }
        return count;
    }
};
