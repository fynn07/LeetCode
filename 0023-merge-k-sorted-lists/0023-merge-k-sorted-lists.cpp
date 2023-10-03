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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){return NULL;}

        vector<int> merged;

        for(int i = 0; i < lists.size(); i++){
            ListNode* head = lists[i];
            if(head == NULL){
                continue;
            }
            while(head){
                merged.push_back(head->val);
                head = head->next;
            }
        }
        if(merged.size() == 0){
            return NULL;
        }

        sort(merged.begin(), merged.end());

        ListNode* output = new ListNode(merged[0]);
        ListNode* tail = output;
        for(int i = 1; i < merged.size(); i++){
            tail->next = new ListNode(merged[i]);
            tail = tail->next;
        }
        return output;
    }
};