/*
*Q��������������a��b, �����ǵĺ�, ������ʹ�� + ����ѧ�������
*Author��Seven17000
*Note�����������ͬΪ0����ͬΪ1��������ȫ1Ϊ1������Ϊ0��
*/


#include<iostream>
using namespace std;

int sum(int a, int b)
{
	if (b == 0)
		return a;

	int c = a^b;
	int d = (a&b) << 1;

	return sum(c,d);
}

int main()
{
	int a = 0, b = 8;
	cout << a + b << endl;
}