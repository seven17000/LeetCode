/*
*���⣺ɾ�������е�����n�����
*���ߣ�Seven17000
*�ʼǣ�ע�⴦���������
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
	{//����ֻ��һ��������ֻ������������
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