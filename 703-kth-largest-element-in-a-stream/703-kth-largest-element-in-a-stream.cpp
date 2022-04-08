class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
            if(pq.size()>size) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>size)
            pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */