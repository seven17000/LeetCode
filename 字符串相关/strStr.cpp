/*
*问题：实现strstr函数：字符串查找函数。
*答者：Seven17000
*笔记：注意类型转换。
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
