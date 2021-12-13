class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val=val;
        prev=nullptr;
        next=nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int len;

    MyLinkedList() {
        head=nullptr;
        tail=nullptr;
        len=0;
    }
    
    int get(int index) {
        Node* curr=head;
        int count=0;
        while(curr!=nullptr){
            if(count==index) return curr->val;
            curr=curr->next;
            count++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* n=new Node(val);
        if(head==nullptr) head=tail=n;
        else{
            n->next=head;
            head->prev=n;
            head=n;
        }
        len++;
    }
    
    void addAtTail(int val) {
        Node* n=new Node(val);
        if(tail==nullptr) head=tail=n;
        else{
            tail->next=n;
            n->prev=tail;
            tail=n;
        }
        len++;
    }

    void addAtIndex(int index, int val) {
        Node* curr=head;
        int count=0;
        if(index==0) {
            addAtHead(val);
            return;
        }
        if(index==len) {
            addAtTail(val);
            return;
        }
        while(curr!=nullptr){
            if(count==index) {
                Node* nextCurr=curr;
                Node* prevNode=curr->prev;
                Node* newN=new Node(val);
                prevNode->next=newN;
                
                newN->next=nextCurr;
                nextCurr->prev=newN;
                newN->prev=prevNode;
                len++;
                return;
            }
            curr=curr->next;
            count++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index>(len-1)) return;
        if(index==0 && len==1){
            head=nullptr;
            tail=nullptr;
            len=0;
            return;
        }
        if(index==0){
            Node* temp=head;
            head=head->next;
            head->prev=nullptr;
            delete temp;
            len--;
            return;
        }
        if(index==(len-1)) {
            Node* temp=tail;
            tail=tail->prev;
            tail->next=nullptr;
            delete temp;
            len--;
            return;
        }
        
        Node* curr=head;
        int count=0;
        while(curr!=nullptr){
            if(count==index){
                Node* prevPtr=curr->prev;
                Node* nextPtr=curr->next;
                prevPtr->next=nextPtr;
                nextPtr->prev=prevPtr;
                delete curr;
                len--;
                return;
            }
            curr=curr->next;
            count++;
        }   
    }
};