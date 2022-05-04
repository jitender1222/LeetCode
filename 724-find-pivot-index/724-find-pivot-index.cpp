class Solution {
public:
    int preSum(vector<int>& nums,int s,int e){
    
    int sum = 0;
    
    while(s<=e){
        sum = sum + nums[s];
        s++;
    }
    
    return sum;
}

int pivotIndex(vector<int>& nums) {
    
    int sum = 0;
    
    for(int i=0;i<nums.size();i++){
        sum = sum + nums[i];
    }
    
    for(int i=0;i<nums.size();i++){
        
        int beforeSum = preSum(nums,0,i-1);
        int afterSum = sum - beforeSum - nums[i];
        
        if(beforeSum == afterSum)
            return i;
    }
    
    return -1;
}
};