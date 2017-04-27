/*
*问题：你有两个用链表代表的整数，其中每个节点包含
*      一个数字。数字存储按照在原来整数中相反的顺序，使
*      得第一个数字位于链表的开头。写出一个函数将两个整
*      数相加，用链表形式返回和。
*举例：给出两个链表 3->1->5->null 和 5->9->2->null，
*      返回 8->0->8->null
*答者：Seven17000
**/

#include<iostream>
using namespace std;

 ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
            
        ListNode *ret = new ListNode(0);
        ListNode *cur = ret;
        int count = 0;
        int tmp = 0;
        
        while(l1&&l2)
        {
            tmp = l1->val+l2->val+count;
            count = tmp/10;
            tmp = tmp%10;
            cur->next = new ListNode(tmp);
            cur = cur->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1)
        {
            tmp = l1->val+count;
            cur->next = new ListNode(tmp);
            cur = cur->next;
            count = tmp/10;
            l1 = l1->next;
        }
        
         while(l2)
        {
            tmp = l2->val+count;
            cur->next = new ListNode(tmp);
            cur = cur->next;
            count = tmp/10;
            l2 = l2->next;
        }
        
        if(count)
            cur->next = new ListNode(count);
            
        return ret->next;
    }