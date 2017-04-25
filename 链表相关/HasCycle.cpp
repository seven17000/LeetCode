 /*
*问题：判断链表是否带环。
*答者：Seven17000
*笔记：注意判断只有一个结点或者只有两个节点的特殊情况
*/
 #include<iostream>
 using namespace std;
 
 bool hasCycle(ListNode *head) 
 {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                break;
        }
        
        return !(fast == NULL || fast->next == NULL);
 }