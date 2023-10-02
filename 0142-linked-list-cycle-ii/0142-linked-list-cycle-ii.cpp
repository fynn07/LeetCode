/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int flag = 0;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            ListNode* slow_two = head;
            while(true){
                if(slow == slow_two){
                    return slow;
                }
                slow_two = slow_two->next;
                slow = slow->next;
            }
        }
        return NULL;


        
    }
};