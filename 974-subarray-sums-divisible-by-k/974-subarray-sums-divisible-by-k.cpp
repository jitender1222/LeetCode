class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]++;
        int currSum=0,count=0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            int rem=currSum%k;
            if(rem<0) rem+=k;
            if(mp.count(rem)>0){
                count+=mp[rem];
            }
            mp[rem]++;
        }
        return count;
    }
};