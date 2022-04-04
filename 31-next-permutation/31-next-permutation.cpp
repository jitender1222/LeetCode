class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        int index=n-2;
        while(index>=0 && nums[index+1]<=nums[index]){
            index--;
        }
        if(index>=0){
            int replacenum=n-1;
            while(nums[replacenum]<=nums[index]){
                replacenum--;
            }
            swap(nums[index],nums[replacenum]);
        }
        reverse(nums.begin()+index+1,nums.end());
    }
};
