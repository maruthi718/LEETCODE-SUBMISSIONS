class MapSum {
public:
    unordered_map<string,int>mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        if(mp.find(key)!=mp.end())
        {
            mp[key]=val;
        }
        else
            mp.emplace(key,val);
    }
    
    int sum(string prefix) {
        int cnt=0,n=prefix.size();
        for(auto it:mp)
        {
            bool x=true;
            for(int i=0;i<n;i++)
            {
                if(prefix[i]!=it.first[i]) 
                {
                    x=false;
                    break;
                }
            }
                if(x) 
                cnt+=it.second;
        }
        return cnt;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */