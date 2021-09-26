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

/**
Try on these tc :
tc(1):
    [9,9,9,9,9,9,9]
    [9,9,9,9]
tc(2):
    [9]
    [0,9,9,9,9]
**/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* x1, ListNode* x2) {
        int c=0;
        ListNode* x3 = new ListNode();
        ListNode* tmp;
        tmp = x3;
        while(x1 != NULL && x2 != NULL)
        {
            if(x1->val + x2->val + c <= 9)
            {
                tmp->val = x1->val + x2->val + c;
                c = 0;
            }
            else 
            {
                tmp->val = (x1->val + x2->val + c)%10;
                c = 1;
            }
            x1 = x1->next;
            x2 = x2->next;
            if(x1 || x2 || c)
            {
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
            else break;
        }
        
        while(x1)
        {
            if(x1->val + c <= 9)
            {
                tmp->val = x1->val + c;
                c = 0;
            }
            else 
            {
                tmp->val = (x1->val + c)%10;
                c = 1;
            }
            x1 = x1->next;
            if(x1 || c)
            {
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
            else break;
        }
        
        while(x2)
        {
            if(x2->val + c <= 9)
            {
                tmp->val = x2->val + c;
                c = 0;
            }
            else 
            {
                tmp->val = (x2->val + c)%10;
                c = 1;
            }
            x2 = x2->next;
            if(x2 || c)
            {
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
            else break;
        }
        if(c)tmp->val = c;
        return x3;
    }
};