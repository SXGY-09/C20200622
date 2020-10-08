#include "InsertionSort.h"
#include <iostream>
using namespace std;
ListNode* InsertionSort::insertionSortList(ListNode* head)
{
    ListNode tmp(INT16_MIN);
    ListNode* min;
    ListNode* cur;
    ListNode* max;
    while (head) {
        min = &tmp;
        max = tmp.next;
        cur = head;
        head = head->next;
        while (max && max->val < cur->val) {
            min = min->next;
            max = max->next;
        }
        min->next = cur;
        cur->next = max;
    }
    return tmp.next;
}

void InsertionSort::test()
{
    ListNode head(30);
    ListNode node1(20);
    ListNode node2(40);
    head.next = &node1;
    node1.next = &node2;
    ListNode* p = insertionSortList(&head);
    while (p != nullptr) {
        cout << p->val << " ";
        p = p->next;
    }
}
