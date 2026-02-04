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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;

        ListNode* temp = head;
        vector<int>a;

        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
        }

        vector<int>b;
        b.push_back(a[0]);

        for(int i=1;i<a.size();i++){
            if(a[i]!=a[i-1]){
                b.push_back(a[i]);
            }
        }

        temp = head;
        int i = 0;
        ListNode* prev = NULL; 

        while(temp!=NULL && i<b.size()){
            temp->val = b[i++];
            prev = temp;
            temp = temp->next;
        }

        if(prev != NULL) {
            prev->next = NULL;
        }

        return head;
    }
};