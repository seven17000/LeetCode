/*
*���⣺��ȡ�����е�K�������
*���ߣ�Seven17000��
*�ʼǣ��������������������⡣
*/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int kthLargestElement(int k, vector<int> nums) {
    // write your code here
    priority_queue<int> pq;
    while(!nums.empty())
    {
        pq.push(nums.back());
        nums.pop_back();
    }
    
    int m = k-1;
    
    while(m--)
    {
        pq.pop();
    }
    return pq.top();
}