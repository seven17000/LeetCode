/*
*问题：获取数组中第K大的数。
*答者：Seven17000。
*笔记：合理利用容器，简化问题。
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