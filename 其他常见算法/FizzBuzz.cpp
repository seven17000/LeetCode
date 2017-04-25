/*
*���⣺Fizz Buzz����
*��������������һ������n. ��1��n��������Ĺ����ӡÿ����
*����������3��������ӡfizz.
*����������5��������ӡbuzz.
*����������ͬʱ��3��5��������ӡfizz buzz.
*���ַ����������ʽ����
*���ߣ�Seven17000
*�ʼǣ�ע�����ж��ܷ�ͬʱ��3��5�������ж�����
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