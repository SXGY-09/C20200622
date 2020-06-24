#include "SwapNode.h"
#include <iostream>
using namespace std;
ListNode* SwapNode::solve(ListNode* head)
{
    ListNode root(0);
    ListNode* p = &root;
    p->next = head;
    while (head && head->next) {
        p->next = head->next;
        head->next = head->next->next;
        p->next->next = head;
        p = head;
        head = head->next;
    }
    return root.next;
}

void SwapNode::test()
{
    ListNode* p1 = new ListNode(1);
    p1->next = new ListNode(2);
    p1->next->next = new ListNode(3);
    p1->next->next->next = new ListNode(4);
    p1->next->next->next->next = new ListNode(5);
    ListNode* result = solve(p1);
    ListNode* tmp = result;
    while (result) {
        cout << result->val << ",";
        result = result->next;
        delete tmp;
        tmp = result;
    }
}
