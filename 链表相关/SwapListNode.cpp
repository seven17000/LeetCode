/*
*问题：交换单链表中的两个结点
*答者：Seven17000
*/

#include<iostream>
using namespace std;

 ListNode* swapNodes(ListNode* head, int v1, int v2) {
        // Write your code here
        ListNode *dummy;
        dummy->next = head;
        ListNode *tmp1 = dummy;
        ListNode *tmp2 = dummy;
        
        while(tmp1->next)
        {
            if(tmp1->next->val == v1)
            {
                break;
            }
            tmp1 = tmp1->next;
        }
        
        while(tmp2->next)
        {
            if(tmp2->next->val == v2)
            {
                break;
            }
            tmp2 = tmp2->next;
        }
        
        if(tmp1->next!=NULL && tmp2->next!=NULL)
        {
            ListNode *tmp = tmp1->next;
            tmp1->next = tmp2->next;
            tmp2->next = tmp;
            tmp = tmp1->next->next;
            tmp1->next->next = tmp2->next->next;
            tmp2->next->next = tmp;
        }
        
        return dummy->next;
    }