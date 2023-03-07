class Solution {
public:
    string smallestSubsequence(string s) {
       int n=s.size();
       vector<bool>visit(26,false);
       vector<int>last(26,0);
       for(int i=0;i<n;i++)
       {
           last[s[i]-'a']=i;
       }
        stack<char>stk;
         stk.push(s[0]); 
         visit[s[0]-'a']=true; 
        for(int i=1;i<n;i++)
        {
                while(!stk.empty() && s[i]<stk.top() && i<last[stk.top()-'a'] && visit[s[i]-'a']==false)
                {
                    visit[stk.top()-'a']=false;
                    stk.pop();
                }
                if(visit[s[i]-'a']==false)
                {
                  stk.push(s[i]); 
                  visit[stk.top()-'a']=true;   
                }
            // cout<<stk.top()<<" ";
        }
        string ans;
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};