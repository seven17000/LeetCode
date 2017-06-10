
/*
*���⣺����һ���ַ�������S���ҵ��������е������ַ���(Anagram)�����һ���ַ����������ַ�������ô������һ����ĸ������ͬ����˳��ͬ���ַ���Ҳ��S�С�
*�����������ַ������� ["lint","intl","inlt","code"]������ ["lint","inlt","intl"]
*���ߣ�Seven17000
*˼·����ÿ���ַ�����ÿ����ĸ������ĸ��˳�����򣬽���������ַ��������ϣ���ù�ϣ����м�����
*/

#include<iostream>
#include<vector>
#incldue<unordered_map>
using namespace std;

string GetSortedString(string str)
{
	int count[26] = { 0 };

	for (int i = 0; i < str.length(); i++)
	{
		count[str[i] - 'a']++;
	}

	string SortedStr = "";
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			SortedStr = SortedStr + (char)(i + 'a');
		}
	}
	return SortedStr;
}

vector<string> anagrams(vector<string> &strs)
{
	unordered_map<string, int> hash;
	for (int i = 0; i < strs.size(); i++)
	{
		string str = GetSortedString(strs[i]);
		if (hash.find(str) == hash.end())
		{
			hash[str] = 1;
		}
		else
		{
			hash[str]++;
		}
	}

	vector<string>  result;
	for (int i = 0; i < strs.size(); i++)
	{
		string str = GetSortedString(strs[i]);
		if (hash.find(str) == hash.end())
		{
			continue;
		}
		else
		{
			if (hash[str] > 1)
				result.push_back(strs[i]);
		}
	}
	return result;
}