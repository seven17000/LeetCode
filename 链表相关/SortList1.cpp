/*
*问题：在 O(n log n) 时间复杂度和常数级的空间复杂度下给链表排序（归并排序）。
*答者：Seven17000
*/
#include<iostream>
using namespace std;

class ListNode 
{//结构定义
public:
	int val;
	ListNode *next;
	ListNode(int val) 
	{
		this->val = val;
		this->next = NULL;
	}	
};
ListNode* SortList(ListNode* head)
{
	if (head == NULL || head->next == NULL)
		return head;

	ListNode* fast;
	ListNode* slow;

	while (fast->next != NULL && fast->next->next != NULL)
	{
		fast = fast->next;
		fast = fast->next;
		slow = slow->next;
	}

	ListNode* mid = slow->next;
	slow->next == NULL;//拆分

	ListNode* list1 = SortList(head);
	ListNode* list2 = SortList(mid);

	ListNode* sorted = Merge(list1, list2);
	return sorted;
}

ListNode* Merge(ListNode* list1, ListNode* list2)
{//合并
	if (list1 == NULL)
		return list2;
	if (list2 == NULL)
		return list1;

	ListNode* head;
	ListNode* tmp;
	
	if (list1->val < list2->val)
	{
		head = list1;
		list1 = list1->next;
	}
	else
	{
		head = list2;
		list2 = list2->next;
	}
	
	tmp = head;

	while (list1 && list2)
	{
		if (list1->val < list2->val)
		{
			tmp->next = list1;
			tmp = tmp->next;
			list1 = list1->next;
		}
		else
		{
			tmp->next = list2;
			tmp = tmp->next;
			list2 = list2->next;
		}
	}

	if (list1 == NULL)
	{
		tmp->next = list2;
	}
	
	if (list2 == NULL)
	{
		tmp->next = list1;
	}

	return head;
}

