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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        if(slow->next == NULL)return true;  
        
        ListNode* fast = head->next->next;
        stack<int>s;
        s.push(slow->val);
        int l=0;
        
        while(slow != NULL)
        {
            ++l;
            slow = slow->next;
        }
        slow = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            s.push(slow->val);
            fast = fast->next->next;
        }
        
        if(l%2)
        {
            slow = slow->next;
        }
        int f=1;
        while(!s.empty())
        {
            slow = slow->next;
            if(s.top()!=slow->val){f=0;break;}
            s.pop();
        }
        if(f)return true;
        else return false;
    }
};  