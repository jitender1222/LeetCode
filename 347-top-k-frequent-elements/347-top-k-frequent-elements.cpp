class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        for(auto it=um.begin();it!=um.end();it++){
            pq.push({it->second,it->first});
        }
        vector<int>res;
        while(k--){
            pair<int,int>temp=pq.top();
            pq.pop();
            res.push_back(temp.second);
        }
        return res;
    }
};
