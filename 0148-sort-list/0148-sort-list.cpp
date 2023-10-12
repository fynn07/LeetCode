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
    ListNode* sortList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        vector<int> digits;
        ListNode* curr = head;
        while(curr){
            digits.push_back(curr->val);
            curr = curr->next;
        }
        sort(digits.begin(), digits.end());

        ListNode* new_head = new ListNode;
        ListNode* tail = new_head;
        new_head->val = digits[0];
        for(int i = 1; i < digits.size(); i++){
            tail->next = new ListNode;
            tail->next->val = digits[i];
            tail = tail->next;
        }
        return new_head;
    }
};