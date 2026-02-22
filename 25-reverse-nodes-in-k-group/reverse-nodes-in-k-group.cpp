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
    ListNode* reverseList(ListNode* head,ListNode* tail){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!=tail){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        while(temp && count<k){
            temp = temp->next;
            count++;
        }
        
        if(count<k){return head;}

        //reverse first k nodes
        ListNode* newHead = reverseList(head,temp);

        head->next = reverseKGroup(temp,k);

        return newHead;
    }
};