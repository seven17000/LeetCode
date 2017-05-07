/*
*问题：判断链表是否为回文链表
*答者：Seven17000
*笔记：利用栈的特性
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

 bool isPalindrome(ListNode* head) {
        // Write your code here
        
        vector<int> Enter;
        vector<int> Exit;
        stack<int> s1;
        
        ListNode *tmp = head;
        
        while(tmp)
        {
            Enter.push_back(tmp->val);
            s1.push(tmp->val);
            tmp = tmp->next;
        }
        
        while(!s1.empty())
        {
            Exit.push_back(s1.top());
            s1.pop();
        }
        
        if(Enter == Exit)
        {
            return true;
        }
        else
        {
            return false;
        }
    }