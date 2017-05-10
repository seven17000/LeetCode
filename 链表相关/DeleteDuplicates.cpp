/*
*问题：删除有序链表的重复元素
*答者：Seven17000
*/
#include<iostream>
using namespace std;

struct ListNode
{
	ListNode *next;
	int val;
	
	ListNode(int x)
		:next(NULL)
		,val(x)
	{}
};

ListNode *DeleteDuplicates(ListNode *head)
{
		ListNode Node(0), *tail, *p, *cur;
	if (!head || !head->next)
	{
		return head;
	}
	Node.next = head;
	tail = head;
	p = head->next;
	while (p)
	{
		cur = p;
		p = p->next;
		if (cur->val != tail->val)
		{
			tail->next = cur;
			tail = cur;
		}
		else
		{
			delete cur;
		}
	}
	tail->next = NULL;
	return Node.next;
}


