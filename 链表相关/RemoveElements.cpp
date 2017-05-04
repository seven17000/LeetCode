/*
*问题：删除链表中的元素
*答者：Seven17000
*笔记：注意特殊情况，例如：1->1->NULL 删除1。
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