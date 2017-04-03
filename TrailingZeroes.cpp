
/*
*问题：计算数字n的阶乘结果末尾的0的个数。
*答者：Seven17000
*笔记：问题可转换为计算阶乘当中出现了多少次5，25，125...的倍数。
*	   他们分别能够跟偶数构成0,00,000....
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