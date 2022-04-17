class Solution {
public:
    bool isValid(string s) {
//         stack<char>st;
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='(' || s[i]=='[' || s[i]=='{')
//                 st.push(s[i]);
            
//             else if(s[i]==')' || s[i]==']' || s[i]=='}'){
    
//             if(s.empty()) return false;
                
//             else if(s[i]==')' && st.top()!='(') return false;
            
//             else if(s[i]==']' && st.top()!='[') return false;
            
//             else if(s[i]=='}' && st.top()!='{') return false; 
                
//              else st.pop();
//             }
//         }
//         if(st.size()==0) return true;
//         else return false;
//     }
        stack <char> st;
        
        int len = s.length();
        for (int i = 0; i<len ; i++)//iterate over each and every elements
        {
             //if current element of the string will be opening bracket
             //then we will just simply push it into the stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty())
                    return false;
                else if(s[i] == ')' && st.top() != '(')
                    return false;
                else if(s[i] == '}' && st.top() != '{')
                    return false;
                else if(s[i] == ']' && st.top() != '[')
                    return false;
                //if control reaches to that line,
                //it means we have got the right pair of brackets,
                //so just pop it.
                else 
                    st.pop();
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    
    }
};