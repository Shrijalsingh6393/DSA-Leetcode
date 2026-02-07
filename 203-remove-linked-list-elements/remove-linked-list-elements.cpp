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
        // ListNode* temp = head;
        // ListNode* toDelete = head;
        // while (head != nullptr && head->val == data) {
        //     ListNode* toDelete = head;
        //     head = head->next;
        //     delete toDelete;
        // }
        
        // temp = head;

        // while(temp!=nullptr && temp->next!=nullptr){
        //     if(temp->next->val == data){
        //         toDelete = temp->next;
        //         temp->next = temp->next->next;
        //         delete toDelete;
        //     }
        //     else{
        //         temp = temp->next;
        //     }
        // }
        // return head;

        ListNode* dummy = new ListNode(0);
        ListNode* d = dummy;
        ListNode* temp = head;

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