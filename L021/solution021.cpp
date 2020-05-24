#include "solution021.h"

ListNode021 *Solution021::mergeTwoLists(ListNode021 *l1, ListNode021 *l2) {
    ListNode021 *head = new ListNode021(0);
    ListNode021 *p = head;

    while (l1 && l2) {
        if (l1->val <= l2->val) {
            head->next = new ListNode021(l1->val);
            l1 = l1->next;
            head = head->next;
        } else {
            head->next = new ListNode021(l2->val);
            l2 = l2->next;
            head = head->next;
        }
    }
    if (l1) head->next = l1;
    if (l2) head->next = l2;
    return p->next;
}
