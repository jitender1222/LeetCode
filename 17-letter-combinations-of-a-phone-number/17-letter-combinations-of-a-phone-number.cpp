class Solution {
public:
    
    void helper(vector<string>&ans,string output,string mp[],int index,string digits){
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';
        string num=mp[number];
        
        for(int i=0;i<num.length();i++){
            output.push_back(num[i]);
            helper(ans,output,mp,index+1,digits);
            output.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0) return ans;
        string output="";
        string mp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        helper(ans,output,mp,0,digits);
        return ans;
    }
};