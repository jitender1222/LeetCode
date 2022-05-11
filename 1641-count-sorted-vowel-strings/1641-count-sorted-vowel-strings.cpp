class Solution {
public:
    int count=0;
    void solve(int n,vector<char>&v,int index){
        
        if(n==0){
            count++;
            return;
        }
        
        if(index>=v.size()) return ;
        solve(n-1,v,index);
        solve(n,v,index+1);
    }
    
    int countVowelStrings(int n) {
        vector<char>v={'a','e','i','o','u'};
        solve(n,v,0);
        
        return count;
    }
};