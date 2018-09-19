#include<iostream>
#include<vector>
using namespace std;

/*
*���⣺�ϲ������������������A��B���һ���µ����顣
*���ߣ�Seven17000
*�ʼǣ�ѧ��������Ŀ�������
*/
vector<int> mergeSortedArray(vector<int> &A, vector<int> &B)
{//�ϲ���������
	int n = A.size() - 1;
	int m = B.size() - 1;
	int pos = A.size() + B.size() - 1;
	A.resize(A.size() + B.size());
	while (n >= 0 && m >= 0)
		A[pos--] = A[n] > B[m] ? A[n--] : B[m--];
	while (n >= 0)
		A[pos--] = A[n--];
	while (m >= 0)
		A[pos--] = B[m--];
	return A;
}

int main()
{
	vector<int> A;
	vector<int> B;
	A = { 1,2,3 };
	B = { 2,3,4 };
	mergeSortedArray(A, B);
	for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	return 0;
}