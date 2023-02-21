class Solution {
public:
    bool isValid(string s)
    {
        int n=s.size();
        stack<char>st;
        for(auto it:s)
        {
            char ch=it;
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            else
            {
               if (!st.empty())
                {
                    char top = st.top() ;
                    if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')) 
                        {
                            st.pop() ; 
                        }
                        else 
                        {
                            return false ; 
                        }
                }
                else
                    return false;
            }
               
        }
        if(st.empty())
            return true; 
        return false;
    } 
};
