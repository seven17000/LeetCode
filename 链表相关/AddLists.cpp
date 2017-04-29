/*
*���⣺����������������������������ÿ���ڵ����
*      һ�����֡����ִ洢������ԭ���������෴��˳��ʹ
*      �õ�һ������λ������Ŀ�ͷ��д��һ��������������
*      ����ӣ���������ʽ���غ͡�
*������������������ 3->1->5->null �� 5->9->2->null��
*      ���� 8->0->8->null
*���ߣ�Seven17000
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