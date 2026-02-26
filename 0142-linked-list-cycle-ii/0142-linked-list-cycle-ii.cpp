class Solution {
public:
  typedef ListNode *ln;

  ListNode *detectCycle(ListNode *head) {
    if (!head || !head->next) {
      return nullptr;
    }
    ln s = head->next;
    ln f = head->next->next;

    while (s && f && s != f) {
      s = s->next;
      f = f->next;
      f = f ? f->next : nullptr;
    }

    if (!s || !f) {
      return nullptr;
    }

    s = head;

    while (s != f) {
      s = s->next;
      f = f->next;
    }

    return s;
  }
};