#include "solution002.h"

ListNode *Solution002::addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *result = nullptr;
    ListNode *end = nullptr;

    int carry = 0;
    while (true) {
        int val_1 = l1 != nullptr ? l1->val : 0;
        int val_2 = l2 != nullptr ? l2->val : 0;

        int a = (val_1 + val_2 + carry) % 10;
        ListNode *temp = new ListNode(a);
        if (result == nullptr) {
            result = new ListNode(a);
            end = result;
        } else {
            end->next = temp;
            end = temp;
        }
        carry = (val_1 + val_2 + carry) / 10;
        if (l1 != nullptr)l1 = l1->next;
        if (l2 != nullptr)l2 = l2->next;
        if (!l1 && !l2)
            break;
    }
    if (carry > 0) {
        ListNode *temp = new ListNode(carry);//carry equals 1
        end->next = temp;
    }
    return result;
}