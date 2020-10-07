#pragma once
#include "ListNode.h"
class LinkedListSort
{
public:
	/// <summary>
	/// 对链表进行排序
	/// </summary>
	/// <param name="head"></param>
	/// <returns></returns>
	ListNode* sortList(ListNode* head);
	/// <summary>
	/// 排序
	/// </summary>
	/// <param name="head"></param>
	/// <returns></returns>
	ListNode* sortOne(ListNode* head);
	/// <summary>
	/// 归并
	/// </summary>
	/// <param name="p1"></param>
	/// <param name="p2"></param>
	/// <returns></returns>
	ListNode* mergeSort(ListNode* p1, ListNode* p2);
	void test();
};

