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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* d = dummy;

        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                d->next = list1;
                list1 = list1->next;
            }
            else{
                d->next = list2;
                list2 = list2->next;
            }
            d = d->next;
        }
        if(list1!=NULL){
            d->next = list1;
        }
        if(list2!=NULL){
            d->next = list2;
        }
        return dummy->next;
    }
};