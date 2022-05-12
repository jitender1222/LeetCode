class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string ans="";
        int n=strs.size();
        for(int i=0;i<strs[0].size();i++){
            int ch=strs[0][i];
            
            bool match=true;
            
            for(int j=1;j<n;j++){
                if(strs[j].size()<i || ch!=strs[j][i]){
                    match=false;
                    break;
                }
            }
            
            if(match==true){
                ans.push_back(ch);
            }
            else{
                match=false;
                break;
            }
        }
        return ans;
    }
};