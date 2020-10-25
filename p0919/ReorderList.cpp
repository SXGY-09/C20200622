#include "ReorderList.h"
#include <iostream>
using namespace std;
void ReorderList::reorderList(ListNode* head)
{
	//�ҵ��м��
	if (head == nullptr || head->next == nullptr) {
		return;
	}
	ListNode root(0);
	root.next = head;
	ListNode* mid = &root;
	ListNode* end = &root;
	while (end != nullptr && end->next != nullptr) {
		mid = mid->next;
		end = end->next->next;
	}
	//end���¸�Ϊ��һ�εĽ�β
	end = mid;
	mid = mid->next;
	end->next = nullptr;
	//ǰ�巨��ת�������
	while (mid != nullptr) {
		ListNode* tmp = mid->next;
		mid->next = end->next;
		end->next = mid;
		mid = tmp;
	}
	//�ϲ�ǰ��������
	ListNode* p1 = head;
	ListNode* p2 = end->next;
	end->next = nullptr;
	while (p1 != nullptr && p2 != nullptr) {
		ListNode* tmp1 = p1->next;
		ListNode* tmp2 = p2->next;
		p1->next = p2;
		p2->next = tmp1;
		p1 = tmp1;
		p2 = tmp2;
	}
}

void ReorderList::test()
{
	ListNode node0(10);
	ListNode node1(20);
	ListNode node2(30);
	ListNode node3(40);
	node0.next = &node1;
	node1.next = &node2;
	node2.next = &node3;
	ListNode* root = &node0;
	reorderList(root);
	while (root != nullptr) {
		cout << root->val << "\t";
		root = root->next;
	}
}
