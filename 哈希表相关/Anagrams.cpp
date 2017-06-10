
/*
*问题：给出一个字符串数组S，找到其中所有的乱序字符串(Anagram)。如果一个字符串是乱序字符串，那么他存在一个字母集合相同，但顺序不同的字符串也在S中。
*样例：对于字符串数组 ["lint","intl","inlt","code"]，返回 ["lint","inlt","intl"]
*答者：Seven17000
*思路：给每个字符串的每个字母按照字母表顺序排序，将排完序的字符串放入哈希表让哈希表进行计数。
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