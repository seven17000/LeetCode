/*
*���⣺��ת�ַ���������һ���ַ�����һ��ƫ����������ƫ������ת�ַ���(����������ת)
*������
*offset=0 => "abcdefg"
*offset=1 => "gabcdef"
*offset=2 => "fgabcde"
*offset=3 => "efgabcd"
*���ߣ�even17000
*/
#include<iostream>
#include<cassert>
#include<string>
using nmespace std;

void rotateString(string &str, int offset)
{//c++ʵ��
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
{//cʵ��
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