/*
*���⣺ʵ�ִ���Сֵ������ջ
*���ߣ�Seven17000
*/
#include<iostream>
#includs<stack>
using namespace std;

class MinStack
{
public:
    void push(int number)
	{
        stk.push(number);
        if(minstk.empty() || number <= minstk.top())
        {
            minstk.push(number);
        }
    }

    int pop()
	{
        int top = stk.top();
        stk.pop();
        if(top == minstk.top())
        {
            minstk.pop();
        }
        return top;
    }

    int min()
	{
        return minstk.top();
    }
private:
	    stack<int> stk,minstk;
};