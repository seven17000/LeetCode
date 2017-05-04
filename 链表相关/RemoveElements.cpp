/*
*���⣺ɾ�������е�Ԫ��
*���ߣ�Seven17000
*�ʼǣ�ע��������������磺1->1->NULL ɾ��1��
*/
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *removeElements(ListNode *head, int val) 
{
        // Write your code here
        ListNode *dummy;
        dummy->next = head;
        ListNode *tmp = dummy;
        
        while (tmp->next != NULL) 
        {
            if (tmp->next->val == val) 
            {
                delete(tmp->next);
                tmp->next = tmp->next->next;
            } 
            else 
            {
                tmp = tmp->next;
            }
        }
        
        return dummy->next;
    }