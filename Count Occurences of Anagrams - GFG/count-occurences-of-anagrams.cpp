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
	    unordered_map<char, int>um;
	    // put all the element into the map ;
	    for(char a: pat){
	        um[a]++;
	    }
	    int k=pat.size();
	    int i=0,j=0;
	    int count=um.size();
	    
	    while(j<txt.size()){
	        
	// if my j is present then i have to decrease the character count
	   if(um.find(txt[j])!=um.end()){
	            um[txt[j]]--;
	  // if all the elemtn present in thr map equals to zro then count++;      
	        if(um[txt[j]]==0)
	            count--;
	        }
	    if(j-i+1<k) j++;
	    
	    else if(j-i+1==k){
	        if(count==0)
	            ans++;
	        // check before sliding the window;
	        if(um.find(txt[i])!=um.end()){
	            um[txt[i]]++;
	        if(um[txt[i]]==1)
	        count++;
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