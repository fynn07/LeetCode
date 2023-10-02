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
    int size = 0;
    ListNode* new_head;

    Solution(ListNode* head) {
        size = 0;
        new_head = head;
        ListNode* curr = head;
        while(curr){
            size++;
            
            curr = curr->next;
        }
    }
    
    int getRandom() {
        ListNode* temp_head = new_head;
        int temp = 0;
        int random_num = 1 + (rand() % size);
        
        while(temp_head){
            temp++;
            if(temp == random_num){
                return temp_head->val;
            }
            temp_head = temp_head->next;
        }
        return -1;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */