#include "ReverseNode.h"
#include <iostream>
using namespace std;
ListNode* ReverseNode::solve(ListNode* head, int k)
{
    ListNode root(0);
    ListNode* tail = &root;
    tail->next = head;
    ListNode* first = tail->next;
    ListNode* last = first;
    while (last) {
        int i = 0;
        for (i = 0; i < k && last; i++) {
            last = last->next;
        }
        if (i < k) {
            break;
        }
        ListNode* prev = last;
        ListNode* tmp = first->next;
        while (first != last) {
            first->next = prev;
            prev = first;
            first = tmp;
            if (tmp) {
                tmp = tmp->next;
            }
        }
        tmp = tail->next;
        tail->next = prev;
        tail = tmp;
        first = tail->next;
        last = first;
    }
	return root.next;
}

void ReverseNode::test()
{
    ListNode* p1 = new ListNode(1);
    p1->next = new ListNode(2);
    p1->next->next = new ListNode(3);
    p1->next->next->next = new ListNode(4);
    ListNode* result = solve(p1, 2);
    ListNode* tmp = result;
    while (result) {
        cout << result->val << ",";
        result = result->next;
        delete tmp;
        tmp = result;
    }
}
