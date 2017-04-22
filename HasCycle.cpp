 /*
*���⣺�ж������Ƿ������
*���ߣ�Seven17000
*�ʼǣ�ע���ж�ֻ��һ��������ֻ�������ڵ���������
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