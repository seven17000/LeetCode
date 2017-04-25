/*
*���⣺����һ���б����б��е�ÿ��Ҫ��Ҫô�Ǹ��б�Ҫô��������
*      ������һ��ֻ���������ļ��б�
*���ߣ�Seven17000
*�ʼǣ�ʹ��c++11�����Լ򻯴��롣
*/

#include<iostream>
#include<vector>
using namespace std;
//ʵ�ֵ�Ϊα����
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
