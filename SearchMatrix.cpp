/*
*问题：
*搜索二维矩阵:写出一个高效的算法来搜索 m × n矩阵中的值。
*这个矩阵具有以下特性：
*每行中的整数从左到右是排序的。
*每行的第一个数大于上一行的最后一个整数。
*答者：Seven17000
*笔记：也可把二维数组转化为一位数组求解。
*/

#include<iostream>
#include<vector>
using namespace std;


bool searchMatrix(vector<vector<int>> &martix, int target)
{
	int m = 0;

	while (m < martix.size())
	{
		if (martix[m][martix[m].size()-1] < target)
			m++;
		else
		{
			int n = 0;
			while (n < martix[m].size() && target != martix[m][n++])
			{
			}

			if (target == martix[m][n-1])
				return true;
			else
				return false;
		}
	}
}

int main()
{
	vector<int> a = {1,3,5,7};
	vector<int> b = {10,12,14,16};
	vector<int> c = {20,22,24,26};
	vector<vector<int>> arr;

	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);

	int key = 4;

	cout << searchMatrix(arr, key);

	return 0;
}