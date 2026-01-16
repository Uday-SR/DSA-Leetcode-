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
        if(!head || !head->next) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        ListNode* forw = head;

        while(forw != NULL && forw->next != NULL) {
            if(forw->val == forw->next->val) {
                while(forw->next != NULL && forw->val == forw->next->val) {
                    forw = forw->next;
                }
                curr->next = forw->next;
            } else {
                curr = curr->next;
            }
            forw = forw->next;
        }

        return dummy->next;
    }
};