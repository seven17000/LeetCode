/*
*���⣺ʵ��strstr�������ַ������Һ�����
*���ߣ�Seven17000
*�ʼǣ�ע������ת����
*/

#include<iostream>
#include<vector>
#include<cassert>
#include<string>
using namespace std;

char* strStr(const char* src, const char* tar)
{
	assert(src);
	assert(tar);

	char* tmp = (char*)src;
	char* tmpSrc = (char*)src;
	char* tmpTar = (char*)tar;

	while (*tmp != '\0')
	{
		tmpSrc = tmp;
		while ((*tmpSrc == *tmpTar)&&(*tmpSrc != '\0')&&(*tmpTar != '\0'))
		{
			tmpSrc++;
			tmpTar++;
		}
		if (*tmpTar == '\0')
		{
			return tmp;
		}
		tmpTar = (char*)tar;
		tmp++;
	}
	return NULL;

}


int main()
{
	char* A = "abcdcbd";
	char* B = "cb";
	cout << strStr(A, B);
	return 0;
}
