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
        vector<int> var;

        if(head == NULL){
            return head;
        }
    
        var.push_back(head->val);
        head = head->next;

        while(head){
            if(head->val != var.back()){
                var.push_back(head->val);
            }
            head = head->next;
        }
        ListNode* output = new ListNode(0);
        ListNode* tail = output;

        for(int i = 0; i < var.size(); i++){
            tail->next = new ListNode(var[i]);
            tail = tail->next;
        }

        return output->next;

        
    }
};