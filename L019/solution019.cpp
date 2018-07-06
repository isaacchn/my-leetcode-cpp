#include "solution019.h"

ListNode019 *Solution019::removeNthFromEnd(ListNode019 *head, int n)
{
    if (!head) return nullptr;
    ListNode019 *n_before = head;
    ListNode019 *current = head;
    while (n > 0)
    {
        current = current->next;
        n--;
    }
    if (!current)
    {
        ListNode019 *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    while (current->next)
    {
        n_before = n_before->next;
        current = current->next;
    }
    ListNode019 *temp = n_before->next;
    n_before->next = temp->next;
    delete temp;
    return head;
}