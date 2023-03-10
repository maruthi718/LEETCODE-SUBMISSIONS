class MinStack {
public:
    stack<int>s;
    MinStack() {
       
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        if(!s.empty()) s.pop();
    }
    
    int top() {
            return s.top();
    }
    
    int getMin() {
        stack<int>temp=s;
        int mini=temp.top();
        temp.pop();
            while(!temp.empty())
            {
                 mini=min(temp.top(),mini);
                temp.pop();
            }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */