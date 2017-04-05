/*
*问题：Fizz Buzz问题
*问题描述：给你一个整数n. 从1到n按照下面的规则打印每个数
*如果这个数被3整除，打印fizz.
*如果这个数被5整除，打印buzz.
*如果这个数能同时被3和5整除，打印fizz buzz.
*以字符串数组的形式返回
*答者：Seven17000
*笔记：注意先判断能否同时被3和5整除在判断其他
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> FizzBuzz(int n)
{
	int i = 1;
	vector<string> FB;
	while (i <= n)
	{
		if (i % 3 == 0 && i % 5 == 0)
			FB.push_back("fizz buzz");
		else if (i % 3 == 0)
			FB.push_back("fizz");
		else if (i % 5 == 0)
			FB.push_back("buzz");
		else
			FB.push_back(to_string(i));

		i++;
	}

	return FB;
}

int main()
{
	vector<string> FB = FizzBuzz(20);
	vector<string>::iterator it;
	for (it = FB.begin(); it != FB.end(); ++it)
		cout << *it;
	return 0;
}