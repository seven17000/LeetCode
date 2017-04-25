/*
*问题：实现二分查找：给定一个排序的整数数组（升序）和一个要查找的整数target
*      用O(logn)的时间查找到target第一次出现的下标（从0开始），如果target不
*      存在于数组中，返回-1。
*答者：Seven17000
*笔记：注意边界问题和重复数字的出现
*/

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &array, int target)
{

	int left = 0;
	int right = array.size();
	int flag = -1;

	while (left<right)
	{
		int n = left + ((right - left) >> 1);

		if (target<array[n])
			right = n;
		else if (target>array[n])
			left = n + 1;
		else
			flag = right = n;
	}
	return flag;
}

int main()
{
	vector<int> arr = {0,1,2,2,3,4,5,6,7,8,9};
	cout << binarySearch(arr, 2);
}