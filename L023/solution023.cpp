#include "solution023.h"

ListNode023 *Solution023::mergeKLists1(vector<ListNode023 *> &lists) {
    if (lists.size() == 0) return nullptr;

    ListNode023 *head = new ListNode023(0);
    ListNode023 *p_head = head;

    while (lists.size() > 0) {
        vector<ListNode023 *>::iterator it = lists.begin();
        while (it < lists.end()) {
            if (!*it)
                it = lists.erase(it);
            else
                it++;
        }

        if (lists.size() > 0) {
            int min = INT_MAX;
            auto min_it = lists.begin();
            it = lists.begin();
            while (it < lists.end()) {
                if ((*it)->val < min) {
                    min = (*it)->val;
                    min_it = it;
                }
                it++;
            }

            //cout << "min = " << min << endl;
            head->next = new ListNode023(min);
            head = head->next;
            *min_it = (*min_it)->next;
        }
    }

    return p_head->next;
}

ListNode023 *Solution023::mergeKLists(vector<ListNode023 *> &lists) {
    if (lists.size() == 0) return nullptr;
    ListNode023 *head = new ListNode023(0);
    ListNode023 *p_head = head;

    bool finish = false;
    vector<ListNode023 *>::iterator min_it = lists.begin();

    while (!finish) {
        int min = INT_MAX;
        finish = true;
        vector<ListNode023 *>::iterator it = lists.begin();
        while (it < lists.end()) {
            if (*it) {
                finish = false;//�зǿ�����
                if ((*it)->val < min) {
                    min = (*it)->val;
                    min_it = it;
                }
            }
            it++;
        }

        if (!finish) {
            head->next = new ListNode023(min);
            head = head->next;
            *min_it = (*min_it)->next;
        }
    }

    return p_head->next;
}