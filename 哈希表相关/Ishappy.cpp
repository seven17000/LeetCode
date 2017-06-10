
/*
*问题：写一个算法来判断一个数是不是"快乐数"。
一个数是不是快乐是这么定义的：
对于一个正整数，每一次将该数替换为他每个位置上的数字的平方和，然后重复
这个过程直到这个数变为1，或是无限循环但始终变不到1。如果可以变为1，那么
这个数就是快乐数。
*答者：Seven17000
*注意：选取合适的容器
*/
#include<iostream>
#include<unordered_set>
using namespace std;

bool isHappy(int n)
{
	if (n == 1)
	{
		return true;
	}

	if (n < 1)
	{
		return false;
	}

	unordered_set<int> num;
	num.insert(n);

	while (1)
	{
		int s = 0;
		while (n)
		{
			s += (n) * (n);
			n = n / 10;
		}

		if (s == 1)
		{
			return true;
		}
		else if (num.find(s) != num.end())
		{
			return false;
		}
		n = s;
		num.insert(s);
	}

}