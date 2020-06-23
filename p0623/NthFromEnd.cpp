#include "NthFromEnd.h"
#include <iostream>
using namespace std;
ListNode* NthFromEnd::solve(ListNode* head, int n)
{
	if (head == nullptr || n <= 0) {
		return head;
	}
	ListNode root{ 0 };
	root.next = head;
	ListNode* first = &root;
	ListNode* second = first;
	while(n--) {
		first = first->next;
	}
	while (first->next != nullptr) {
		first = first->next;
		second = second->next;
	}
	ListNode* tmp = second->next;
	second->next = second->next->next;
	delete tmp;
	return root.next;
}

void NthFromEnd::test()
{
	ListNode* head = new ListNode{ 1 };
	head->next = new ListNode{ 2 };
	head->next->next = new ListNode{ 3 };
	head->next->next->next = new ListNode{ 4 };
	head->next->next->next->next = new ListNode{ 5 };
	ListNode* result = solve(head, 2);
	ListNode* tmp = result;
	while (tmp) {
		cout << tmp->val << ",";
		tmp = tmp->next;
		delete result;
		result = tmp;
	}
}
