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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *pre=nullptr;
        ListNode *cur=head;
        ListNode* ansHead= head->next;
        
        while(cur && cur->next){
            if(pre){
                pre->next= cur->next;
            }
            ListNode* nxtBlockStart= cur->next->next;
            cur->next->next=cur;
            cur->next=nxtBlockStart;
            pre=cur;
            cur= nxtBlockStart;
            

        }
        return ansHead;
    }
};