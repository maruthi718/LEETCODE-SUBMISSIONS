class DataStream {
public:
    vector<int>v;
    int val,len;
    int freq=0,last;
    DataStream(int value, int k) { 
        val=value; 
        len=k; 
    }
    
    bool consec(int num) {
       v.emplace_back(num);
        if(v.size()==1)
            {
              if(num==val)
              freq=1;
            }
      
            
            if( v.size()>1 and num==v[v.size()-2] and num==val ) 
                freq++;
            else
            {
                if(num==val)
              freq=1;
                else freq=0;
            } 
         if(v.size()<len) return false;
        if(freq>=len) return true;
        else return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */