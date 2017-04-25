/*
*问题：合并K个有序链表。
*答者：Seven17000。
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct ListNode
{
	ListNode* next;
	int val;
	ListNode(int val)
		:next(NULL)
		,val(val)
	{}
};

struct cmp
{
	bool operator ()(ListNode* l1,ListNode* l2) 
	{
		return l1->val > l2->val;
	}
};

ListNode* mergeKLists(vector<ListNode*> &lists)
{
	priority_queue<ListNode*, vector<ListNode*>, cmp> heap;
	for (int i = 0; i < lists.size(); ++i)
	{
		heap.push(lists[i]);
	}

	ListNode *ret = NULL;
	ListNode *tmp = NULL;
	ListNode *cur = NULL;
	while (!heap.empty())
	{
		tmp = heap.top;
		heap.pop();
		if (tmp->next)
			heap.push(tmp->next);

		if (ret == NULL)
		{
			ret = tmp;
			cur = ret;
		}
		else
		{
			cur->next = tmp;
			cur = cur->next;
		}
	}
	return ret;
}