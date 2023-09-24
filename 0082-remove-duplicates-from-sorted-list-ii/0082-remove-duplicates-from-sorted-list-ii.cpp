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
        map<int, int> hash;
        ListNode* real = new ListNode(0);
        ListNode* output = real;

        while(head){
            hash[head->val]++;
            head = head->next;
        }
        map<int, int>::iterator it = hash.begin();

        while(it != hash.end()){
            if(it->second == 1){
                output->next = new ListNode(it->first);
                output = output->next;
            }
            it++;
        }
        return real->next;


    }
};