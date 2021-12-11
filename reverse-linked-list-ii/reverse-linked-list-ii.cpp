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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode *prev=dummyNode;
        
        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        ListNode *pivot=prev->next;
        for(int i=left;i<right;i++){
            swap(prev->next,pivot->next->next);
            swap(prev->next,pivot->next);
        }
        return dummyNode->next;
    }
};