#include<iostream>
#include<vector>
using namespace std;

/*
*问题：合并两个排序的整数数组A和B变成一个新的数组。
*答者：Seven17000
*笔记：学会利用三目运算符。
*/
vector<int> mergeSortedArray(vector<int> &A, vector<int> &B)
{//合并有序数组
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