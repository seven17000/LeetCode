/*
*问题：旋转字符串，给定一个字符串和一个偏移量，根据偏移量旋转字符串(从左向右旋转)
*样例：
*offset=0 => "abcdefg"
*offset=1 => "gabcdef"
*offset=2 => "fgabcde"
*offset=3 => "efgabcd"
*答者：even17000
*/
#include<iostream>
#include<cassert>
#include<string>
using nmespace std;

void rotateString(string &str, int offset)
{//c++实现
	if (offset == 0||str.size() == 0)
		return;
	
	offset = offset%str.size();
	str = str.substr(str.size() - offset, offset) + str.substr(0, str.size() - offset);
}

int main()
{
	string str = "abcdef";

}

void rotateString(char* str, size_t size, size_t k)
{//c实现
	assert(str);
	if (size == 0 || k == 0)
		return;

	k %= size;
	k = size - k;

	while (k--)
	{
		char tmp = str[0];

		for (int i = 0; i < size - 1; ++i)
		{
			str[i] = str[i + 1];
		}
		str[size - 1] = tmp;
	}
}

int main()
{
	char str[] = "abcdefg";
	rotateString(str,strlen(str),2);
	cout << str;
	return 0;
}