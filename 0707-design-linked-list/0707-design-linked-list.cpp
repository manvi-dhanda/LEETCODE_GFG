class Node{
    public:
     int val;
    Node* prev, *next;
    Node(int _Val=0)
    {
         val= _Val;
         prev=next=nullptr;
    }
    Node(int _Val, Node* _Pre, Node* _Nxt)
    {
            val=_Val;
            prev=_Pre;
            next=_Nxt;
    }
};
class MyLinkedList {
private:
    Node* getNode(int ind) {
        if(ind<0 || ind>=size) return nullptr;

        Node* itr= head;
        while(ind--)
        {
            itr=itr->next;
        }
        return itr;
    }
public:
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
        head=tail=nullptr;
        size=0;
    }
    
    int get(int ind) {
        Node* nd= getNode(ind);
        return nd? nd->val : -1;
    }
    
    void addAtHead(int val) {
        Node* nd= new Node(val);
        if(size==0)
        {
            head=tail=nd;
        }
        else
        {
            nd->next=head;
            head->prev= nd;
            head=nd;
        }
        ++size;
    }
    
    void addAtTail(int val) {
        Node* nd= new Node(val);
        if(size==0)
        {
            head=tail=nd;
        }
        else
        {
            tail->next=nd;
            nd->prev=tail;
            tail=nd;
        }
        ++size;
    }
    
    void addAtIndex(int ind, int val) {
        if(ind<0 || ind>size)
        {
            return;
        }
        if(ind==size)
        {
            return addAtTail(val);
        }
        if(ind==0)
        {
            return addAtHead(val);
        }
        Node* nextNode=getNode(ind);
        Node* newNode= new Node(val);
        Node* preNode=nextNode->prev;
        
        preNode->next=newNode;
        newNode->prev=preNode;
        newNode->next=nextNode;
        nextNode->prev=newNode;
        
        ++size;
    }
    
    void deleteAtIndex(int ind) {
        if (ind < 0 || ind >= size)
            return;

        Node* nd = getNode(ind);

        if (size == 1) {
            head = tail = nullptr;
        }
        else if (nd == head) {
            head = head->next;
            head->prev = nullptr;
        }
         else if (nd == tail) {
            tail = tail->prev;
            tail->next = nullptr;
        }
        else {
            Node* prevNode = nd->prev;
            Node* nextNode = nd->next;

            prevNode->next = nextNode;
            nextNode->prev = prevNode;
        }
        delete nd;
        size--;
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