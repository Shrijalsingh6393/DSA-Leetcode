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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        
        ListNode* temp = head;
        ListNode* copyH = NULL;
        ListNode* copyT = NULL;

        while(temp!=NULL){
            ListNode* newNode = new ListNode(temp->val);
            if(copyH==NULL){
                copyH = newNode;
                copyT = newNode;
            }
            else{
                copyT->next = newNode;
                copyT = copyT->next;
            }
            temp = temp->next;
        } 

        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(current!=NULL){
            next = current->next;
            current->next = prev;

            prev = current;
            current = next;
        }

        ListNode* p1 = prev;
        ListNode* p2 = copyH;

        while(p1!=NULL && p2!=NULL){
            if(p1->val!=p2->val){
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};