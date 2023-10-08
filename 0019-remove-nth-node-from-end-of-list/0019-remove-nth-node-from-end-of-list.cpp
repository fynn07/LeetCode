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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        ListNode* new_head = prev;
        curr = prev;
        prev = NULL;

        int i = 1;

        while(curr){
            if(i == n){
                if(i == 1){
                    if(curr->next == NULL){
                        return NULL;
                    }
                    new_head = new_head->next;
                    break;
                }
                else{
                    prev->next = curr->next;
                    break;
                }
            }
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev = nullptr;

        while(new_head){
            
            ListNode* temp = new_head->next;
            new_head->next = prev;
            prev = new_head;
            new_head = temp;
        }
        return prev;  
        
    }
};