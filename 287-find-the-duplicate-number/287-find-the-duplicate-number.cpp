class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=-1;
        int j=1,i=0;
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                ans=nums[i];
                break;
            }
            else{
                i++;
                j++;
            }
        }
        return ans;
    }
};