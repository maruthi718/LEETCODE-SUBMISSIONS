class MyCircularQueue {
public:
    list<int>q;
    int currsize=0;
    int size;
    MyCircularQueue(int k) {
        size=k;
    }
    
    bool enQueue(int value) {
        if(currsize<size)
        {
            q.emplace_back(value);
            currsize++;
            return true;
        }
        else
            return false;
    }
    
    bool deQueue() {
        if(currsize>0 && currsize<=size)
        {
            q.pop_front();
            currsize--;
            return true;
        }
        else
            return false;
    }
    
    int Front() {
        if(currsize>0)
        {
             return q.front();
        }
          else
              return -1;
    }
    
    int Rear() {
        if(currsize>0 && currsize<=size)
             return q.back();
          else
              return -1;
    }
    
    bool isEmpty() {
        if(currsize==0)
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if(currsize==size)
            return true;
        else
            return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */