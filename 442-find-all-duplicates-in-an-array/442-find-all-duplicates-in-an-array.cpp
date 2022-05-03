class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>um;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        for(auto it:um){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};