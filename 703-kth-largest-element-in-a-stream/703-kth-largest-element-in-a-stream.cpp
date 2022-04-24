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
/* 
so in this we have to find the kth largest element so basically 1st approach is that we have to sort the array and find the kth element we can do this but timeC goes to NLOGN
which is not that much good.

2nd approach is to use min heap and here the thing is we have to push the element and chcek if the size of the element is greater than the k value than  we need to pop out from the queue because it is min heap every time the smallest number is on the top so when we doing this in the end when nothing left to add the number we can easily return top element that is our answer.
*/

