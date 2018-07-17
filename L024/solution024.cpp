#include "solution024.h"

void solution024::swapPairsHelper(ListNode024 *pre, ListNode024 *head)
{
    if (!head)
        pre->next = nullptr;
    else
    {
        if (head->next)
        {
            ListNode024 *next = head->next;
            ListNode024 *n_next = next->next;
            next->next = head;
            head->next = n_next;
            pre->next = next;
            swapPairsHelper(head, head->next);
        } else
        {
            pre->next = head;
        }
    }
}

ListNode024 *solution024::swapPairs(ListNode024 *head)
{
    if (!head||!head->next) return head;

    else
    {
        ListNode024 *p = new ListNode024(0);
        swapPairsHelper(p, head);
        return p->next;
    }
}