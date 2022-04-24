// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int ans=0;
	    unordered_map<char,int>um;
	    for(int i=0;i<pat.length();i++){
	        um[pat[i]]++;
	    }
	    int i=0,j=0,count=um.size(),k=pat.length();
	    
	    while(j<txt.length()){
	        
	        if(um.find(txt[j])!=um.end()){
	            um[txt[j]]--;
	            
	            if(um[txt[j]]==0)
	            count--;
	        }
	        if(j-i+1<k) j++;
	        
	        else if(j-i+1==k){
	            if(count==0)
	            ans++;
	            
	            if(um.find(txt[i])!=um.end()){
	                um[txt[i]]++;
	                
	                if(um[txt[i]]==1) count++;
	            }
	        i++;
	        j++;
	        }
	    }
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends