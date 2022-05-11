class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
//        long long int n=matrix.size();
//         long long int m=matrix[0].size();
        
//         vector<long long int>ans;
//         long long int top=0,bottom=n-1,left=0,right=m-1;
//         int direction=0;
//         while(top<=bottom && left<=right){
            
//             if(direction==0){
//                 for(int i=left;i<=right;i++){
//                     ans.push_back(matrix[top][i]);
//                 }
//                     top++;
                
//             }
//             else if(direction==1){
//                 for(int i=top;i<=bottom;i++){
//                     ans.push_back(matrix[i][right]);
//                 }
//                     right--;
                
//             }
//             else if(direction==2){
//                 for(int i=right;i>=left;i++){
//                     ans.push_back(matrix[bottom][i]);
//                 }
//                     bottom--;
                
//             }
//             else if(direction==3){
//                 for(int i=bottom;i>=top;i--){
//                     ans.push_back(matrix[i][left]);
//                 }
//                 left++;
                
//             }
            
//             direction=(direction+1)%4;
            
//         }
//         return ans;
        int T,B,L,R,dir;
    T=0;
    B=A.size()-1;
    L=0;
    R=A[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
    }
};