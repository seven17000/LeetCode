/*
*问题：给定一个列表，该列表中的每个要素要么是个列表，要么是整数。
*      将其变成一个只包含整数的简单列表。
*答者：Seven17000
*笔记：使用c++11新特性简化代码。
*/

#include<iostream>
#include<vector>
using namespace std;
//实现的为伪代码
class NestedInteger {
public:
	// Return true if this NestedInteger holds a single integer,
	// rather than a nested list.
	bool isInteger() const;

	// Return the single integer that this NestedInteger holds,
	// if it holds a single integer
	// The result is undefined if this NestedInteger holds a nested list
	int getInteger() const;

	// Return the nested list that this NestedInteger holds,
	// if it holds a nested list
	// The result is undefined if this NestedInteger holds a single integer
	const vector<NestedInteger> &getList() const;
};

vector<int> flatten(vector<NestedInteger> &nestedInteger)
{
	vector<int> arr;
	for (auto ele : nestedInteger)
	{
		if (ele.isInteger())
		{
			arr.push_back(ele.getInteger());
		}
		else
		{
			vector<NestedInteger> sub_list = ele.getList();
			vector<int> tmp = flatten(sub_list);
			arr.insert(arr.end(),tmp.begin(),tmp.end());
		}
	}
	return arr;
}
