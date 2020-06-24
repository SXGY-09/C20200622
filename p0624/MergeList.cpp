#include "MergeList.h"
#include <iostream>
ListNode* MergeList::solve(vector<ListNode*>& lists)
{
    ListNode root(0);
    ListNode* p = &root;
    for (auto i = lists.begin(); i < lists.end();) {
        if (*i == nullptr) {
            //擦除元素会使当前迭代器失效，因此重新获取迭代器
            i = lists.erase(i);
        }
        else {
            i++;
        }
    }
    while (lists.size() > 1) {
        int minIdx = 0;
        int minVal = lists[0]->val;
        for (int i = 1; i < lists.size(); i++) {
            if (lists[i]->val < minVal) {
                minIdx = i;
                minVal = lists[i]->val;
            }
        }
        p->next = lists[minIdx];
        p = p->next;
        lists[minIdx] = lists[minIdx]->next;
        if (lists[minIdx] == nullptr) {
            lists.erase(lists.begin() + minIdx);
        }
    }
    if (lists.size() == 1) {
        p->next = lists[0];
    }
    return root.next;
}

void MergeList::test()
{
    ListNode* p1 = new ListNode(3);
    p1->next = new ListNode(7);
    p1->next->next = new ListNode(8);
    ListNode* p2 = new ListNode(2);
    p2->next = new ListNode(4);
    p2->next->next = new ListNode(9);
    ListNode* p3 = new ListNode(7);
    vector<ListNode*> lists{ p1,p2,p3,nullptr };
    ListNode* result = solve(lists);
    ListNode* tmp = result;
    while (result) {
        cout << result->val << ",";
        result = result->next;
        delete tmp;
        tmp = result;
    }
}
