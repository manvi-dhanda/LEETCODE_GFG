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
    typedef ListNode* ln;
    ln reverseList(ln head)
    {
        ln pre= nullptr;
        ln cur=head;
        while(cur)
        {
            ln nxt=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        ln s=head;
        ln f=head;
        while(f && f->next)
        {
            s=s->next;
            f=f->next->next;

        }
        ln r=reverseList(s);
        ln l=head;
        while(l && r && l!=r)
        {
            if(l->val != r->val)
            {
                return 0;
            }
            l=l->next;
            r=r->next;
        }
        return 1;
    }
};