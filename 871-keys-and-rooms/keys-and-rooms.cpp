class Solution {
private:
    int bfs(vector<int>&vis,vector<vector<int>>& rooms){
        queue<int>q;
        int count=1;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto i:rooms[node]){
                if(!vis[i]){
                    count++;
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return count;
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>vis(n,0);
        vis[0]=1;
        int count=bfs(vis,rooms);
        return n==count;
    }
};