class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),count=0,sum=0;
        unordered_map<int,int>um;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];// find the sum of all element 
            
            if(sum==k) count++; // if sum equals to k then count++;
            
            if(um.find(sum-k)!=um.end())
                count+=um[sum-k];// increase the value of count 
            
            um[sum]++;// put the elemnt 
        }
        return count;
    }
};

        /***************** prefix subarray sum ***********************/

/* so here we place the first elemnt as it is and compare with the value of K if its equal then count++ other wise we will search it on the map if we find that elemnt inside the map then we can add the value of the particular element lets say we have [13 1] so we need to add 1 to our count and increase the value of that index also and if we cant find just put that elemnt inside the map;

after that we can add the other number to it and do the same thing again and again.
*/