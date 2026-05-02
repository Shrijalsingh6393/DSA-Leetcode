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
    ListNode* removeElements(ListNode* head, int data) {
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);
        ListNode* d = dummy;

        while(temp!=NULL){
            if(temp->val!=data){
                d->next = temp;
                d = d->next;
            }
            temp = temp->next;
        }
        d->next = NULL;
        return dummy->next;
    }
};