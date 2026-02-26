class Solution {
public:
  typedef ListNode *ln;
  bool hasCycle(ListNode *head) {
    ln s = head;
    ln f = head;

    while (f && f->next) {
      s = s->next;
      f = f->next->next;

      if (s == f)
        return 1;
    }

    return 0;
  }
};