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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 1;
        int k_count = 0;
        if(head == NULL){return head;}
        if(k == 0){return head;}

        while(curr){
            if(curr->next == NULL){
                curr->next = head;
                break;
            }
            curr = curr->next;
            count++;
        }

        k = k % count;
        while(k_count != (count - k)){
            head = head->next;
            k_count++;
        }

        ListNode* new_head = head;

        for(int i = 0; i < count; i++){
            if(i == count - 1){
                head->next = NULL;
                break;
            }
            head = head->next;
        }

        return new_head;

        
    }
};