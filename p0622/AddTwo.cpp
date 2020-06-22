#include "AddTwo.h"
#include <iostream>
using namespace std;
ListNode* AddTwo::solve(ListNode* l1, ListNode* l2)
{
    ListNode root{ 0 };
    ListNode* p = &root;
    int x1, x2;
    //½øÎ»
    int cap = 0;
    while (l1 != nullptr || l2 != nullptr || cap!=0) {
        if (l1 != nullptr) {
            x1 = l1->val;
            l1 = l1->next;
        }
        else {
            x1 = 0;
        }
        if (l2 != nullptr) {
            x2 = l2->val;
            l2 = l2->next;
        }
        else {
            x2 = 0;
        }
        p->next = new ListNode{ (x1 + x2 + cap) % 10 };
        p = p->next;
        cap = (x1 + x2 + cap) / 10;
    }
    return root.next;
}

void AddTwo::test()
{
    ListNode* p1 = new ListNode{ 1 };
    p1->next = new ListNode{ 2 };
    p1->next->next = new ListNode{ 8 };
    ListNode* p2 = new ListNode{ 9 };
    p2->next = new ListNode{ 3 };
    ListNode* p = solve(p1, p2);
    ListNode* tmp = p;
    while (p != nullptr) {
        cout << p->val << endl;
        p = p->next;
        delete tmp;
        tmp = p;
    }
    tmp = p1;
    while (p1!=nullptr)
    {
        p1 = p1->next;
        delete tmp;
        tmp = p1;
    }
    tmp = p2;
    while (p2 != nullptr) {
        p2 = p2->next;
        delete tmp;
        tmp = p2;
    }
}
