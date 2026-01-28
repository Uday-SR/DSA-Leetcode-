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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;

        ListNode* last = head;
        ListNode* first = head;
        ListNode* bLast = head;

        while(k > 0) {

            while(last->next != NULL) {
                bLast = last;
                last = last->next;
            }

            bLast->next = NULL;
            last->next = first;

            bLast = last;
            first = last;
            head = last;

            k--;
        }

        return head;
    }
};