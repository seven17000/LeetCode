 /*
 *问题：判断两个链表是否相交
 *注意事项：
 *如果两个链表没有交叉，返回null。否则返回相交结点。
 *在返回结果后，两个链表仍须保持原有的结构。
 *可假定整个链表结构中没有循环。
 *答者：Seven17000
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