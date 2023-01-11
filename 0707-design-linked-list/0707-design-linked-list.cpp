class MyLinkedList {
    struct listnode{
        int val;
        listnode *next;
        listnode(int x): val(x), next(nullptr) {}
    };
public:
    listnode *head;
    int len;
    MyLinkedList() {
        head=nullptr;
        len=0;
    }
    
    int get(int index) {
        if(index<0 or index>=len)return -1;
        listnode *temp = head;
        while(temp and index)
        {
            temp = temp->next;
            index--;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        listnode *first=new listnode(val);
        first->next=head;
        head=first;
        len++;
    }
    
    void addAtTail(int val) {
        if(head==NULL)
        {
            head = new listnode(val);
            len++;
            return;
        }
        listnode *temp;
        temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        listnode *last=new listnode(val);
        temp->next=last;
        last->next=nullptr;
        len++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>len or index<0)return;
        if(index==0)
        {
           listnode *first=new listnode(val);
        first->next=head;
        head=first;
        len++;
            return;
        }
        listnode *temp = head,*prev = temp;
        while(index and temp)
        {
            prev = temp;
            temp = temp->next;
            index--;
        }
        prev->next = new listnode(val);
        prev = prev->next;
        prev->next = temp;
        len++;
        return;
    }
    
    void deleteAtIndex(int index) {
       if (index == 0) {
			listnode *tmp = head;
			head = head->next;
			len--;
			delete tmp;
	       return;
		}

		listnode *curr = head, *pre = nullptr;
		while(curr && index > 0) {
			pre = curr;
			curr = curr->next;
			index--;
		}

		if (index == 0 && curr != nullptr) {
			listnode *tmp = curr;
			pre->next = curr->next;
			len--;
			delete tmp;
		}
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */