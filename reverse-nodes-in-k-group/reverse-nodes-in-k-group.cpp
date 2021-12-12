/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *reverseLinkedListInKGroup(ListNode* head, int k){
        
        if(head==NULL)
            return head;
        
        ListNode *current=head;
        int currentLength=1;
        
        while(current->next!=NULL and currentLength<k){
            current=current->next;
            currentLength+=1;
        }
        
        if(currentLength<k){
            return head;
        }
        
        ListNode *tempNode=current->next;
        current->next=NULL;
        
        //reverse 
        ListNode *prev=NULL;
        current=head;
        while(current){
            ListNode *temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        
        ListNode *tempList=reverseLinkedListInKGroup(tempNode,k);
        head->next=tempList;
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseLinkedListInKGroup(head,k);
    }
};