/*
*���⣺��һ��������������������ʹ�ù鲢���򣬿�������
*      ����������κ�����O��nlogn���������㷨��
*���ߣ�Seven17000
*/

#include<iostream>
#include<vector>
using namespace std;

void sortIntegers2(vector<int>& A) 
{//����ʵ��
	int l = 0;
	int r = A.size()-1;
	_sortIntegers2(A, l, r);
}

void _sortIntegers2(vector<int>& A,int l,int r)
{
	int i = l;
	int j = r;
	int x = A[i];
	if (i < j)
	{
		
		while (i < j)
		{
			while (i < j && A[j] >= x)
				j--;
			if (i < j)
				A[i++] = A[j];

			while (i < j && A[i] < x)
				i++;
			if (i < j)
				A[j--] = A[i];
		}
	}
	A[i] = x;
	_sortIntegers2(A, l, i);
	_sortIntegers2(A, i + 1, r);
}