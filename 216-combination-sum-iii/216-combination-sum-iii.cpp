// class Solution {
// public:
//     void solve(int k,int n,vector<vector<int>>&ans,vector<int>output,int index){
//        if(n<0 || k<0) return ;
       
//        if(n==0 && k==0) {
//            ans.push_back(output);
//            return;
//        }
//         for(int i=index;i<=9;i++){
//             output.push_back(i);
//             solve(k-1,n-i,ans,output,index+1);
//             output.pop_back();
//         }
        
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<vector<int>>ans;
//         vector<int>output;
//          // if(n==1) return ans;
//         solve(k,n,ans,output,1);
//         return ans;
//     }
// };
class Solution {
public:
    void  combinations(int k,int idx, int n,vector<int>temp,vector<vector<int>>&ans)
    {
        if(n<0 || temp.size()>k)
            return;
        if(n==0 && temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=idx;i<=9;i++)
        {
            temp.push_back(i);
            combinations(k,i+1,n-i,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinations(k,1,n,temp,ans);
        return ans;
    }
};