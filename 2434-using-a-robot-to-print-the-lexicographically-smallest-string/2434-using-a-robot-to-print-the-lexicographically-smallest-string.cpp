class Solution {
public:
    string robotWithString(string s) {
        string ans;
        stack<char>st;
        int n=s.size(),i=0;
        vector<char>suffix(n);
        suffix[n-1]=s[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=min(suffix[i+1],s[i]);
        }
        while(i<n)
        {
            if(st.empty())
            {
                st.push(s[i]);
                i++;
                continue;
            }
            if(st.top()<=suffix[i])
            {
                ans+=st.top();
                st.pop();
            }
            else
            {
                st.push(s[i]);
                i++;
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};