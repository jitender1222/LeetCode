class Solution {
public:    
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        
        int first=0,second=0,last=n-1;
        while(second<=last){
            
            if(nums[second]==0){
                swap(nums[second],nums[first]);
                second++;first++;
            }
            else if(nums[second]==2){
                swap(nums[second],nums[last]);
               
                last--;
            }
            else{
                second++;
            }
        }
    }
};