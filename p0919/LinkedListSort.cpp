#include "LinkedListSort.h"
#include <iostream>
using namespace std;
ListNode* LinkedListSort::sortList(ListNode* head)
{
    return sortOne(head);
}

ListNode* LinkedListSort::sortOne(ListNode* head)
{
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* mid = head;
    ListNode* end = head;
    while (end->next != nullptr && end->next->next != nullptr) {
        mid = mid->next;
        end = end->next->next;
    }
    end = mid->next;
    mid->next = nullptr;
    return mergeSort(sortOne(head), sortOne(end));
}

ListNode* LinkedListSort::mergeSort(ListNode* p1, ListNode* p2)
{
    ListNode root(0);
    ListNode* p = &root;
    while (p1 != nullptr && p2 != nullptr) {
        if (p1->val <= p2->val) {
            p->next = p1;
            p1 = p1->next;
        }
        else {
            p->next = p2;
            p2 = p2->next;
        }
        p = p->next;
    }
    if (p1 != nullptr) {
        p->next = p1;
    }
    if (p2 != nullptr) {
        p->next = p2;
    }
    return root.next;
}

void LinkedListSort::test()
{
    ListNode head(30);
    ListNode node1(20);
    ListNode node2(40);
    head.next = &node1;
    node1.next = &node2;
    ListNode* p = sortList(&head);
    while (p != nullptr) {
        cout << p->val << " ";
        p = p->next;
    }
}
