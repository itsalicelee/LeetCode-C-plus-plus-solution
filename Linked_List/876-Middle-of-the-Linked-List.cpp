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
    ListNode* middleNode(ListNode* head) {
        ListNode* cur = head;
        size_t cnt = 0;
        while(cur != nullptr){
            cnt += 1;
            cur = cur->next;
        }
        size_t mid = cnt / 2 + 1;
        cur = head;
        for(size_t i = 1; i < mid; ++i){
            cur = cur->next;
        }
        return cur;
    }
};
