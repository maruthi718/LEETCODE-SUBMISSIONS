class MyCircularDeque {
public:
    list<int>q;
    int size=0;
    int k;
    MyCircularDeque(int p) {
        k=p;
    }
    
    bool insertFront(int value) {
        if(size<k)
        {
            q.push_front(value);
            size++;
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(size<k)
        {
            q.push_back(value);
            size++;
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(size>0)
        {
            q.pop_front();
            size--;
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(size>0)
        {
            q.pop_back();
            size--;
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(size>0)
            return q.front();
        return -1;
    }
    
    int getRear() {
        if(size>0)
            return q.back();
        return -1;
    }
    
    bool isEmpty() {
        if(size==0)
            return true;
        return false;
    }
    
    bool isFull() {
        if(size==k)
            return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */