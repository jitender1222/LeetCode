class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>s;
    void solve(vector<int>&nums,int index ){
        if(index==nums.size() && s.find(nums)==s.end()){
            ans.push_back(nums);
            s.insert(nums);
            return ;
        } 
        for(int i=index;i<=nums.size()-1;i++){
            swap(nums[i],nums[index]);
            solve(nums,index+1);
            swap(nums[i],nums[index]);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};