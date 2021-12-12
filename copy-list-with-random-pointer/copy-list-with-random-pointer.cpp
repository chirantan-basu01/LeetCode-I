/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *dummyNode=new Node(-1);
        unordered_map<Node*,Node*>mp;
        Node *runner=dummyNode;
        Node *current=head;
        
        while(current){
            Node *newNode=new Node(current->val);
            mp[current]=newNode;
            runner->next=newNode;
            current=current->next;
            runner=runner->next;
        }
        
        current=head;
        runner=dummyNode->next;
        
        while(current){
            runner->random=mp[current->random];
            runner=runner->next;
            current=current->next;
        }
        return dummyNode->next;
    }
};