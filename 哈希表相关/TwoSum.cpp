/*
*问题：给一个整数数组，找到两个数使得他们的和等于一个给定的数 target。
*      你需要实现的函数twoSum需要返回这两个数的下标, 并且第一个下标小于第二个下标。
*      注意这里下标的范围是 1 到 n，不是以 0 开头。
*答者：Seven17000
*笔记：合理利用哈希表，简化问题。
*/

#include<iostream>
#inculde<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
	unordered_map<int, int> hash;
	vector<int> result;

	for (int i = 0; i < nums.size(); i++)
	{
		if (hash.find(target-nums[i]) != hash.end())//这句即判断要查找的值是否在hash表中。
		{
			result.push_back(hash[target-nums[i]]+1);
			result.push_back(i+1);
			return result;
		}
		hash[nums[i]] = i;//把vector中的数组下标和值同时存入map，值为key，下标为value，即可以通过值找到相应下标。
	}

	result.push_back(-1);
	return result;

}

int main()
{
	vector<int> test = {1,4,5,7,9};
	auto tmp = twoSum(test, 12);
	for (int x : tmp)
	{
		cout << x << " ";
	}
	return 0;
}