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
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr){
            return false;
        }
        ListNode* cur = head;
        unordered_set<ListNode*> set;
        while(set.count(cur) == 0){
            set.insert(cur);
            if(cur->next != nullptr){
                cur = cur->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
