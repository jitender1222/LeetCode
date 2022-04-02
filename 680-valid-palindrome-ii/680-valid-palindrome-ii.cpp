class Solution {
public:
    bool validPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        
        int cntS=0,cntE=0;
        
        while(start<end){
            if(s[start]==s[end]){
                start++;end--;}
            else{
                start++;
                cntS++;
            }
            if(cntS>1){
                break;
            }
        }
          start=0;
          end=s.length()-1;
        
          
        while(start<end){
            if(s[start]==s[end]){
                start++;end--;}
            else{
                end--;
                cntE++;
            }
            if(cntE>1){
                break;
            }
        }
        if(cntS==1 || cntE==1)return true;
        if(cntS ==0 || cntE==0)return true;
        
        return false;
    }
};