class Solution {
public:
  ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
    int sza = 0;
    int szb = 0;

    ListNode *headA = a;
    ListNode *headB = b;

    while (headA) {
      ++sza;
      headA = headA->next;
    }

    while (headB) {
      ++szb;
      headB = headB->next;
    }

    if (sza < szb) {
      swap(sza, szb);
      headA = b;
      headB = a;
    } else {
      headA = a;
      headB = b;
    }

    for (int i = 0; i < sza - szb; ++i) {
      headA = headA->next;
    }

    while (headA && headB && headA != headB) {
      headA = headA->next;
      headB = headB->next;
    }

    return (headA && headB) ? headA : nullptr;
  }
};