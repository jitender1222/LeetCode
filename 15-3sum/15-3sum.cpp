class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int left=i+1;
                int right=n-1;
                int sum=0-nums[i];
                while(left<right){
                if(nums[left]+nums[right]==sum){
                    vector<int>output;
                    output.push_back(nums[i]);
                    output.push_back(nums[left]);
                    output.push_back(nums[right]);
                    ans.push_back(output);
    
                while(left<right && nums[left]==nums[left+1])left++;
                while(left<right && nums[right]==nums[right-1])right--;
                    left++;right--;
                }
                
            else if(nums[left]+nums[right]>sum) right--;
                
            else left++;
                }
            }
        }
        return ans;
    
    }
};