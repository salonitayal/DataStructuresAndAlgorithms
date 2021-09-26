class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL) return head;
        if(head->next->next==NULL) return head->next;
        ListNode* x = head;
        ListNode* x1 = head->next->next;
        while(x1 != NULL && x1->next != NULL)
        {
            x = x->next;
            x1 = x1->next->next;
        }
        return x->next;
    }
};