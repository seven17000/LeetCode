/*
*���⣺
*������ά����:д��һ����Ч���㷨������ m �� n�����е�ֵ��
*�����������������ԣ�
*ÿ���е�����������������ġ�
*ÿ�еĵ�һ����������һ�е����һ��������
*���ߣ�Seven17000
*�ʼǣ�Ҳ�ɰѶ�ά����ת��Ϊһλ������⡣
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