class Solution {
public:
void findCombination(vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&output,int ind,int sum){
    if(ind>=candidates.size()) return ;
    
    if(sum>target) return;
    
    if(sum==target){
        ans.push_back(output);
        return ;
    }
        output.push_back(candidates[ind]);
        findCombination(candidates,target,ans,output,ind,sum+candidates[ind]);
        output.pop_back();
        findCombination(candidates,target,ans,output,ind+1,sum);
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        findCombination(candidates,target,ans,output,0,0);
        return ans;
    }
};