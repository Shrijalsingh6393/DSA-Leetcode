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
    ListNode* middleNode(ListNode* head) {
    //     ListNode* temp = head;

    //     int idx=0;

    //     while(temp->next!=NULL){
    //     idx++;
    //     temp=temp->next;
    //     }

    //     mid = idx/2;

    //     ListNode* ptr = head;

    //     for(int i=mid;i<idx;i++){
    //         ptr=ptr->next;
    //     }

    // return ptr;

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
    }
};