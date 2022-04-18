class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans;
        unordered_map<int,int>um;
        
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.size()==0){
                um.insert({nums2[i],-1});
            }
            
            else if(st.top()>nums2[i]){
                um.insert({nums2[i],st.top()});
            }
            else if(st.top()<=nums2[i]){
                while(st.size()>0 && st.top()<=nums2[i])
                    st.pop();
                if(st.size()==0){
                    um.insert({nums2[i],-1});
                }
                else{
                    um.insert({nums2[i],st.top()});
                }
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(um[nums1[i]]);
        }
        return ans;
    }
};