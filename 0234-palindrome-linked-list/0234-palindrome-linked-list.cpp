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
    ListNode* recreate(ListNode* head){
        ListNode* curr = head;
        ListNode* output = new ListNode(curr->val);
        curr = curr->next;
        ListNode* tail = output;

        while(curr){
            tail->next = new ListNode(curr->val);
            tail = tail->next;
            curr = curr->next;
        }
        return output;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* recreated = recreate(head);
        ListNode* reversed = reverse(head);
        
        while(recreated){
            if(recreated->val != reversed->val){
                return false;
            }
            reversed = reversed->next;
            recreated = recreated->next;
        }
        
        return true;
    }
};