class Solution {
public:
    void sortColors(vector<int>& nums) {
        int first=0,second=0,end=nums.size()-1;
        while(second<=end){
            if(nums[second]==0){
                swap(nums[second],nums[first]);
                first++;second++;
            }
            else if(nums[second]==2){
                swap(nums[second],nums[end]);
                end--;
            }
            else{
                second++;
            }
        }
    }
};