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
        ListNode* cur = head;
        if(cur == nullptr || cur->next == nullptr){
            return head;
        }


        while(cur != nullptr){
            ListNode* choose = cur -> next;
            if(choose != nullptr){
                while(choose->val == cur->val){
                    choose = choose->next;
                    if(choose == nullptr){
                        break;
                    }
                }    
            }
            cur->next = choose;
            cur = cur->next;
        }
        return head;
    }
};
