/*
*问题：复杂链表的复制。
*答者：Seven17000
**/

#include<iostream>
#include<unordered_map>
using namespace std;

struct RandomListNode {
	int label;
	RandomListNode *next, *random;
	RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

RandomListNode *copyRandomList(RandomListNode *head)
{//常规方法
	if (head == NULL)
		return NULL;

	RandomListNode *ret = new RandomListNode(head->label);
	RandomListNode *p = head;
	RandomListNode *q = ret;
	while (p)
	{
		p = p->next;
		RandomListNode *tmp = new RandomListNode(p->label);
		q->next = tmp;
		q = q->next;
	}
	p = head;
	q = ret;
	while (p)
	{
		RandomListNode *i = p;
		RandomListNode *j = q;
		while (p->random != i)
		{
			i = i->next;
			j = j->next;
		}
		q->random = j;
		p = p->next;
		q = q->next;
	}
	return ret;
}
RandomListNode *copyRandomList(RandomListNode *head)
{//使用容器
	unordered_map<RandomListNode*, RandomListNode*> tmp;
	RandomListNode *ret = new RandomListNode(0);
	RandomListNode *p = head;
	RandomListNode *q = ret;
	
	while (p)
	{
		RandomListNode *copy = new RandomListNode(p->label);
		tmp[p] = copy;
		q->next = copy;
		q = q->next;
		p = p->next;
	}
	p = head;
	while (p)
	{
		if (p->random)
			tmp[p]->random = tmp[p->random];

		p = p->next;
	}
	
	return ret->next;
}
