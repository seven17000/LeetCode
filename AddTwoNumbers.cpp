/*
*Q：给出两个整数a和b, 求他们的和, 但不能使用 + 等数学运算符。
*Author：Seven17000
*Note：异或运算相同为0，不同为1。与运算全1为1，其他为0。
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