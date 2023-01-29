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
    ListNode* removeElements(ListNode* head, int val) {
     
        while(head != nullptr && head->val == val){
            head = head->next;  // move to the first node that is not val
        }
        if(head == nullptr){
            return head;
        }
        head->next = removeElements(head->next, val);
        return head;
    }
};
