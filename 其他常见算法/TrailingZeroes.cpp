
/*
*���⣺��������n�Ľ׳˽��ĩβ��0�ĸ�����
*���ߣ�Seven17000
*�ʼǣ������ת��Ϊ����׳˵��г����˶��ٴ�5��25��125...�ı�����
*	   ���Ƿֱ��ܹ���ż������0,00,000....
*/

#include<iostream>
using namespace std;

int trailingZeroes(int n)
{
	int sum = 0;

	while (n)
	{
		n /= 5;
		sum += n;
	}
	return sum;
}

int main()
{
	int n = 11;
	cout << trailingZeroes(n) << endl;
	return 0;
}