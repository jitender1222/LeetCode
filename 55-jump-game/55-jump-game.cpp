class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int minJumps=0;
     for(int i=n-2;i>=0;i--)   {
         minJumps++;
         if(nums[i]>=minJumps){
             minJumps=0;
         }
     }
         if(minJumps==0) return true;
         else
             return false;
    }
};