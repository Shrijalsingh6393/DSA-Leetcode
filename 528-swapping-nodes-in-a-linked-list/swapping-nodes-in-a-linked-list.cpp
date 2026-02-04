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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start = head;
        ListNode* end = head;

        int n=0;
        ListNode* temp = head;

        while(temp!=NULL){
            temp=temp->next;
            n++;
        }

        int c1 = 0;
        int c2 = 0;
        while(start!=NULL && c1<k-1){
            start = start->next;
            c1++;
        }

        int last = n-k;
        while(last--){
            end = end->next;
            c2++;
        }

        int v = end->val;
        end->val = start->val;
        start->val = v;

        return head;
    }
};