#pragma once
#include "ListNode.h"
class LinkedListSort
{
public:
	/// <summary>
	/// �������������
	/// </summary>
	/// <param name="head"></param>
	/// <returns></returns>
	ListNode* sortList(ListNode* head);
	/// <summary>
	/// ����
	/// </summary>
	/// <param name="head"></param>
	/// <returns></returns>
	ListNode* sortOne(ListNode* head);
	/// <summary>
	/// �鲢
	/// </summary>
	/// <param name="p1"></param>
	/// <param name="p2"></param>
	/// <returns></returns>
	ListNode* mergeSort(ListNode* p1, ListNode* p2);
	void test();
};

