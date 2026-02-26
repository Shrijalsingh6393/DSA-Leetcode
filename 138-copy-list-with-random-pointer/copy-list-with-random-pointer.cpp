/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       if(head == NULL) return NULL;

        Node* temp = head;

        // Step 1: Insert copy nodes
        while(temp != NULL) {
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }

        // Step 2: Copy random pointers
        temp = head;
        while(temp != NULL) {
            if(temp->random != NULL)
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }

        // Step 3: Separate the lists
        temp = head;
        Node* dummy = new Node(0);
        Node* copyTail = dummy;

        while(temp != NULL) {
            Node* copy = temp->next;
            temp->next = copy->next;
            
            copyTail->next = copy;
            copyTail = copy;
            
            temp = temp->next;
        }

        return dummy->next; 
    }
};