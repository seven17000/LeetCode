 /*
 *���⣺�ж����������Ƿ��ཻ
 *ע�����
 *�����������û�н��棬����null�����򷵻��ཻ��㡣
 *�ڷ��ؽ���������������뱣��ԭ�еĽṹ��
 *�ɼٶ���������ṹ��û��ѭ����
 *���ߣ�Seven17000
 */
 
 #include<iostream>
 using namespace std;
 
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // write your code here
        if(headA == NULL || headB == NULL)
        {
            return NULL;
        }
        
        ListNode *tmp = headB;
        while(headA)
        {
            while(headB)
            {
                if(headA == headB)
                    return headA;
                
                headB = headB->next;
            }
            headB = tmp;
            headA = headA->next;
        }
        
        return NULL;
    }