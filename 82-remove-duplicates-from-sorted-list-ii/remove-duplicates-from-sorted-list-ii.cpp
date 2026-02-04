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
        if(head == NULL) return NULL;

        vector<int>v;
        ListNode* temp = head;

        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        unordered_map<int,int>m;
        vector<int>ans;

        for(int i=0;i<v.size();i++){
           m[v[i]]++;
        }

        for(auto el:m){
            if(el.second==1){
                ans.push_back(el.first);
            }
        }
        sort(ans.begin(),ans.end());

        ListNode* dummy = new ListNode(0);
        temp = dummy;
        int i = 0;

        for(int x : ans){
            temp->next = new ListNode(x);
            temp = temp->next;
        }

        return dummy->next;
    }
};