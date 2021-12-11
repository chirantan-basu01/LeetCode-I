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
        unordered_map<Node*, Node*>mp;
        Node *dummyNode = new Node(-10001);
        Node *itr = dummyNode;
        Node *current = head;
        
        while(current){
            Node *newNode = new Node(current->val);
            mp[current] = newNode;
            itr->next = newNode;
            current = current->next;
            itr = itr->next;
        }
        
        current = head;
        itr = dummyNode->next;
        
        while(current){
            itr->random = mp[current->random];
            itr = itr->next;
            current = current->next;
        }
        return dummyNode->next;
    }
};