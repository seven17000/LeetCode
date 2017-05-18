/*
*���⣺��һ���������飬�ҵ�������ʹ�����ǵĺ͵���һ���������� target��
*      ����Ҫʵ�ֵĺ���twoSum��Ҫ���������������±�, ���ҵ�һ���±�С�ڵڶ����±ꡣ
*      ע�������±�ķ�Χ�� 1 �� n�������� 0 ��ͷ��
*���ߣ�Seven17000
*�ʼǣ��������ù�ϣ�������⡣
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
		if (hash.find(target-nums[i]) != hash.end())//��伴�ж�Ҫ���ҵ�ֵ�Ƿ���hash���С�
		{
			result.push_back(hash[target-nums[i]]+1);
			result.push_back(i+1);
			return result;
		}
		hash[nums[i]] = i;//��vector�е������±��ֵͬʱ����map��ֵΪkey���±�Ϊvalue��������ͨ��ֵ�ҵ���Ӧ�±ꡣ
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