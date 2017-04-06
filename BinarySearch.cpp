/*
*���⣺ʵ�ֶ��ֲ��ң�����һ��������������飨���򣩺�һ��Ҫ���ҵ�����target
*      ��O(logn)��ʱ����ҵ�target��һ�γ��ֵ��±꣨��0��ʼ�������target��
*      �����������У�����-1��
*���ߣ�Seven17000
*�ʼǣ�ע��߽�������ظ����ֵĳ���
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