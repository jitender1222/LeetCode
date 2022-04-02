class Solution {
public:
    // bool ispalindrome(int i,int j,string &s,int del)
    // {
    //     if(i>=j)return true;
    //     if(s[i]==s[j]) ispalindrome(i+1,j-1,s,false);
    //     if(s[i]!=s[j] && del) return false;
    //     else
    //         return ispalindrome(i+1,j,s,true) || ispalindrome(i,j-1,s,true);
    // }
    // bool validPalindrome(string s) {
    //     int i=0,j=s.length()-1;
    //     if(ispalindrome(i,j,s,false)) return true;
    //     else return false;
    // }
         bool possiblepalindrome(string& s,int i,int j,bool skipped)
    {
        if(i>=j) return true;
        if(s[i]==s[j]) return possiblepalindrome(s,i+1,j-1,skipped);
        if(s[i]!=s[j] && skipped) return false;
        else return possiblepalindrome(s,i+1,j,true) || possiblepalindrome(s,i,j-1,true);
    }
    bool validPalindrome(string s)
    {
        int i=0,j=s.size()-1;
        if(possiblepalindrome(s,i,j,false)) return true;
        else return false;
    }
};