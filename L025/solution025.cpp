#include "solution025.h"

ListNode *Solution025::reverseList(ListNode *head, int k)
{
    if (k <= 1)
        return head;

    /*如果head的长度少于k则不处理*/
    ListNode *p = head;
    int temp = k;
    while (temp > 0)
    {
        if (!p)
            return head;
        temp--;
        p = p->next;
    }

    /*倒序逻辑*/
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *cur = head->next;
    while (cur && k > 1)
    {
        head->next = cur->next;//head=已排序子链表的尾部
        cur->next = dummy->next;//dummy->next=已排序子链表的头部
        dummy->next = cur;
        cur = head->next;//未排序子链表的头部
        k--;
    }
    return dummy->next;
}


void Solution025::reverseKGroupHelper(ListNode *pre, ListNode *head, int k)
{
    if (!head)
        pre->next = nullptr;
    else
    {
        ListNode *reversedHead = reverseList(head, k);
        pre->next = reversedHead;
        reverseKGroupHelper(head, head->next, k);//head=已排序链表的尾部
    }
}

ListNode *Solution025::reverseKGroup(ListNode *head, int k)
{
    if (!head || !head->next)
        return head;
    else
    {
        ListNode *dummy = new ListNode(0);
        reverseKGroupHelper(dummy, head, k);
        return dummy->next;
    }
}