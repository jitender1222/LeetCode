class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>um;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            um[arr[i]]++;
        }
        for(auto it:um){
            ans.push_back(it.second);
        }
        set<int>st(ans.begin(),ans.end());
    
        int n=ans.size();
        int m=st.size();
        if(n==m)return true;
        return false;
    }
};