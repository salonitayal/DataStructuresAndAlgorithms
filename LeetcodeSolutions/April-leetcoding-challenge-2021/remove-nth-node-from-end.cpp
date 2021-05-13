class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* s, *f;
        s = f = head;
        while(n--)f=f->next;
        if(f==NULL)return head->next;
        while(f->next)
        {
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return head;
    }
};  