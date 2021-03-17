int lengthOfList(ListNode* headA, int c1)
{
    while(headA != NULL)
    {
        ++c1;
        headA = headA->next;
    }
    return c1;
}

ListNode* traverseList(ListNode* A, int d)
{
    while(d--)A = A->next;
    return A;
}

ListNode* checkIntersection(ListNode* A, ListNode* B)
{
    while(A != B)
    {
        A = A->next;
        B = B->next;
    }
    return A;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=0, c2=0;
        
        ListNode* A = headA;
        ListNode* B = headB;
        
        c1 = lengthOfList(A, c1);
        c2 = lengthOfList(B, c2);
        
        int d = abs(c1-c2);
        // Traverse the longer list
        
        if(c1 > c2)A = traverseList(A, d);
        else B = traverseList(B, d);
        
        //compare the address to check the intersection
        ListNode* x = checkIntersection(A, B);
        
        return x;
    }
};