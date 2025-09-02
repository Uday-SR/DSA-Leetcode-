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
    ListNode* sortList(ListNode* head) {
        if(!head) return NULL;
        vector <int> temp;

        ListNode* x = head;

        while(x != NULL) {
            temp.push_back(x->val);
            x = x->next;
        }

        sort(temp.begin(), temp.end());

        ListNode* newHead = new ListNode(temp[0]);
        ListNode* y = newHead;

        for(int i = 1; i < temp.size(); i++) {
            y->next = new ListNode(temp[i]);
            y = y->next;
        }

        return newHead;
    }
};