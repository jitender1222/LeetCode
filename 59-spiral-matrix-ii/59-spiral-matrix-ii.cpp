class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int val=0;
        vector<vector<int>>ans(n,vector<int>(n,0));
        int startrow=0,startcol=0,endrow=n-1,endcol=n-1;
        
        while(startrow<=endrow && startcol<=endcol){
            for(int i=startcol;i<=endcol;i++)
                ans[startrow][i]=++val;
            startrow++;
            
            for(int i=startrow;i<=endrow;i++)
                ans[i][endcol]=++val;
            endcol--;
            
            for(int i=endcol;i>=startcol;i--)
                ans[endrow][i]=++val;
            endrow--;
            
            for(int i=endrow;i>=startrow;i--)
                ans[i][startcol]=++val;
            startcol++;
        }
        return ans;
    }
};