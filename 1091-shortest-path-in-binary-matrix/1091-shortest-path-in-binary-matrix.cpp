class Solution {
public:
    
    bool isValid(vector<vector<int>>& grid, int i, int j, int n,
                 vector<vector<bool>>& vis){
        
        return (i>=0 and i<n and j>=0 and j<n and grid[i][j]==0 and !vis[i][j]);   
    }
    
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int ans=0,size=0,i=0,j=0;
//         queue<pair<int,int>>q;
        
//         vector<vector<bool>>vis(n,vector<bool>(n,false));
//         if(grid[0][0]==0){
//             q.push({0,0});
//             vis[0][0]=true;
//         }
        
//         while(!q.empty()){
//             size=q.size();
//             ans++;
//             for(int k=0;k<size;k++){
//             pair<int,int>node=q.front();
//             q.pop();
            
//             int i=node.first,j=node.second;
            
//             if(i==n-1 && j==n-1) return ans;
            
//             for(int k=i-1;k<=i+1;k++){
//                 for(int v=j-1;v<=j+1;v++){
                    
//                     if(isPossible(grid,i,j,n,vis)){
//                         q.push({k,v});
//                         vis[k][v]=true;
//                     }
//                 }
//             }
//             }
//         }
//         return -1;
//     }
// };
    
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool> (n, false));
        queue<pair<int, int>> q;
        int ans = 0;
        int nodesPushed;
        
        if(grid[0][0] == 0){
            q.push({0, 0});
            visited[0][0] = true;
        }
                
        while(!q.empty()){
            
            nodesPushed = q.size();
            ans++;
            
            for(int cnt = 0; cnt < nodesPushed; cnt++){
                
                pair<int, int> frontNode = q.front();
                q.pop();
            
                int i = frontNode.first, j = frontNode.second;

                if(i==n-1 and j==n-1) return ans;

                for(int k = i - 1; k <= i + 1 ; k++){
                    for(int l = j - 1; l <= j + 1; l++){
                        if(isValid(grid, k, l, n, visited)){
                            q.push({k, l});
                            visited[k][l] = true;
                        }
                    }
                }                
                
            }            
            
        }
        
        return -1;
        
    }
};