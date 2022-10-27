class Solution {
public:
    string multiply(string num1, string num2) {
        int a=num1.size();
        int b=num2.size();
        if(num1=="0" || num2=="0")
            return "0";
        if(num1=="1")
            return num2;
        if(num2=="1")
            return num1;
        vector<int>v(a+b,0);
        for(int i=a-1;i>=0;i--)
        {
            for(int j=b-1;j>=0;j--)
            {
                int x=(int) num1[i]-'0';
                int y=(int) num2[j]-'0';
                int pro=x*y;
                pro+=v[i+j+1];
                v[i+j]+=pro/10;
                v[i+j+1]=pro%10;
            }
        }
        int i=0;
        string ans="";
        while(v[i]==0)i++;
        while(i<v.size())
        {
            ans+=to_string(v[i++]);
        }
        return ans;
    }
};