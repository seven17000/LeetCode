/*
 *Question:Reverse a list.
 *Answer:Seven17000
 * */
#include<iostream>
#include<assert>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->nest = NULL;
    }
}

ListNode *reverse(ListNode *head)
{
    if(head == NULL||head->next == NULL)
        return head;

    ListNode* cur = head;
    ListNode* prev = NULL;
    ListNode* tmp = NULL;

    while(cur)
    {
        tmp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = tmp;
    }
    return prev;
}


