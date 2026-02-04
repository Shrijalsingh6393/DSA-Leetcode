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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        if(head==NULL){
            return NULL;
        }
    
        int c = 0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        int pos = c-n;

        if(pos == 0){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        ListNode* t = head;
        int i = 0;

        while(i<pos-1 && t!=NULL){
            t = t->next;
            i++;
        }
        if(t!=NULL && t->next!=NULL){
            ListNode* a = t->next;
            t->next = t->next->next;
            delete a;
        }
        return head;
    }
};