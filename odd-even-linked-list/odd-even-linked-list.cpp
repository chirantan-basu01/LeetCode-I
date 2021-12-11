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
    ListNode* oddEvenList(ListNode* head) {
        int oddPos=true;
        
        ListNode *oddDummyNode=new ListNode(-1);
        ListNode *evenDummyNode=new ListNode(-1);
        
        ListNode *current1=oddDummyNode;
        ListNode *current2=evenDummyNode;
        
        ListNode *current=head;
        
        while(current!=NULL){
            if(oddPos==true){
                ListNode *newNode=new ListNode(current->val);
                current1->next=newNode;
                current1=current1->next;
                oddPos=false;
            }
            else{
                ListNode *newNode=new ListNode(current->val);
                current2->next=newNode;
                current2=current2->next;
                oddPos=true;
            }
            current=current->next;
        }
        current1->next=evenDummyNode->next;
        return oddDummyNode->next;
    }
};