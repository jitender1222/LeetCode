class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int n=needle.size();
        int m=haystack.size();
        if(n==0) return 0;
        while(i<haystack.size() && j<needle.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==n) return i-n;
            }
            else{
                i=i-j+1;
                j=0;
            }
        }
        return -1;
    }
};