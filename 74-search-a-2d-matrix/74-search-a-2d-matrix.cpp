class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int start=nums.size(),end=nums[0].size()-1;
        int i=0;
        while(i<start && end>=0){
            if(nums[i][end]==target)
                return true;
            else if(nums[i][end]<target)
                i++;
            else
                end--;
        }
        return false;
    }
};