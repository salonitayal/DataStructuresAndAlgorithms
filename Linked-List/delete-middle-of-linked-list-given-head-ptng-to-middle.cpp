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
    void deleteNode(ListNode* node) {
        ListNode* head = node->next;
        node->val = head->val;   // 5 has 1
        node->next = head->next;
        head->next = NULL;
    }
};