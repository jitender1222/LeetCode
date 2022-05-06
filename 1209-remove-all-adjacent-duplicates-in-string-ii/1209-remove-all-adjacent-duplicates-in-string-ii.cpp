class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>v;
        
        for(auto c:s){
            if(v.size()==0 || v.back().first!=c){
                v.push_back({c,1});
            }
            else{
                if(v.back().first==c) v.back().second++;
            }
            if(v.back().second==k){
                v.pop_back();
            }
        }
        string res="";
        for(auto x:v){
            res.append(x.second,x.first);
        }
        return res;
    }
};