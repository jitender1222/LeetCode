class Solution {
public:
    int firstPosition(vector<int>& nums,int start,int target,int end){
        int index=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                index=mid;
                end=mid-1;
            }
            else if(nums[mid]>target) end=mid-1;
            
            else start=mid+1;
        }
        return index;
    }
     int lastPosition(vector<int>& nums,int start,int target,int end){
        int index=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                index=mid;
                start=mid+1;
            }
            else if(nums[mid]>target) end=mid-1;
            
            else start=mid+1;
        }
        return index;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
    return {firstPosition(nums,0,target,nums.size()-1),
            lastPosition(nums,0,target,nums.size()-1)};
    }
};