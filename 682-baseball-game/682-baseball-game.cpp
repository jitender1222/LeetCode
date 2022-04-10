class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>st;
        int value1=0,value2=0,ans=0;
        for(int i=0;i<s.size();i++){
            
             if(s[i]=="C")
                st.pop();
            
            else if(s[i]=="D"){
                st.push(st.top()*2);
                
            }
            else if(s[i]=="+"){
                value1=st.top();
                st.pop();
                value2=st.top();
                st.push(value1);
                st.push(value1+value2); 
            }
            else{
                st.push(stoi(s[i]));
            }
        }
        while(st.size()!=0){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};