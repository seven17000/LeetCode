/*
*问题：最长回文串问题
*举例：给出 s = "abccccdd" 返回 7
*      一种可以构建出来的最长回文串方案是 "dccaccd"。
*答者：Seven17000
*思路：注意字符串为"ccccc"的情况以及回文串长度的奇偶性问题。
*/

int LongestPalindrome(string& s)
{
	int ret = 0;
	int flag = 0;
	unordered_map<char, int>  hash;
	for (int i = 0; i < s.length(); i++)
	{
		if (hash.find(s[i]) != hash.end())
		{
			hash[s[i]]++;
		}
		else
		{
			hash[s[i]] = 1;
		}
	}

	if (hash.size() == 1)
	{
		return hash.begin()->second;
	}

	for (auto it = hash.begin(); it != hash.end(); it++)
	{
		if (it->second % 2 == 0)
		{
			ret += it->second;
		}
		else if (it->second % 2 == 1)
		{
			ret += (it->second)-1;
		}
		if (it->second == 1)
		{
			flag = 1;
		}
	}

	if (flag == 1)
		ret = ret + 1;

	return ret;
}

int main()
{
	string s = "NTrQdQGgwtxqRTSBOitAXUkwGLgUHtQOmYMwZlUxqZysKpZxRoehgirdMUgy";
	cout << LongestPalindrome(s) << endl;
	return 0;
}