/*
*问题：删除链表中倒数第n个结点
*答者：Seven17000
*笔记：注意处理特殊情况
*/

ListNode* RemoveNthFromEnd(ListNode *head, int n)
{
	ListNode *ret = head;
	
	while(n--)
	{
		head = head->next;
	}
	
	ListNode *slow = ret;
	
	if(head == NULL)
	{//考虑只有一个结点或者只有两个结点情况
		ListNode* tmp = ret;
		delete tmp;
		tmp = NULL;
		return ret->next;
	}
	
	while(head->next != NULL)
	{
		head = head->next;
		slow = slow->next;
	}
	ListNode *tmp = slow->next;
	slow = slow->next->next;
	delete tmp;
	tmp = NULL;
	return ret;
}