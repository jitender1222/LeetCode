// class Solution {
// public:
//     int solve(vector<vector<int>>& matrix,int i,int j, vector<vector<int>>&dp){
//         if(dp[i][j]!=-1) return dp[i][j];
        
//         int x=matrix[i][j];
//         matrix[i][j]=-12;
        
//         int l=j-1>=0 && matrix[i][j-1]>x? solve(matrix,i-1,j,dp):0;
        
//         int r=j+1<matrix[0].size() && matrix[i][j+1]>x?solve(matrix,i,j+1,dp):0;
        
//         int u=i-1>=0 && matrix[i-1][j]>x ? solve(matrix,i-1,j,dp):0;
        
//         int d=i+1 < matrix.size() && matrix[i+1][j]>x ?solve(matrix,i+1,j,dp):0;
        
//         matrix[i][j]=x;
        
//         return dp[i][j]= 1+max({l,r,u,d});
//     }
    
    
//     int longestIncreasingPath(vector<vector<int>>& matrix) {
//         int m=matrix.size(),n=matrix[0].size(),ans=0;
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 dp[i][j]=solve(matrix,i,j,dp);
//                 ans=max(ans,dp[i][j]);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int helper(vector<vector<int>> &matrix, int i, int j, vector<vector<int>> &dp) {
        if(dp[i][j] != -1)
            return dp[i][j];
        int x = matrix[i][j];
        matrix[i][j] = -12;
        int u = i-1 >= 0 && matrix[i-1][j] > x ? helper(matrix,i-1,j,dp) : 0;
        int d = i+1 < matrix.size() && matrix[i+1][j] > x ? helper(matrix,i+1,j,dp) : 0;
        int l = j-1 >= 0 && matrix[i][j-1] > x ? helper(matrix,i,j-1,dp) : 0;
        int r = j+1 < matrix[0].size() && matrix[i][j+1] > x ? helper(matrix,i,j+1,dp) : 0;
        matrix[i][j] = x;
        return dp[i][j] = 1 + max({u, d, l, r});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), ans=0;
        vector<vector<int>> dp(m, vector<int>(n,-1));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
               dp[i][j] = helper(matrix, i, j, dp);
               ans = max(ans, dp[i][j]);
            }
        }
        return ans;
    }
};