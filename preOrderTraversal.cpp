/*
*���⣺����һ�Ŷ����������������ǰ�����������ʹ�÷ǵݹ�����
*���ߣ�Seven17000
*/

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> result;
vector<int> preorderTraversal(TreeNode* root)
{//�ݹ���
	if (root == NULL)
		return result;

	if (root)
	{
		result.push_back(root->val);
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
	return result;
}

vector<int> preorderTraversal(TreeNode* root)
{//�ǵݹ�
	vector<int> result;
	stack<TreeNode*> s;

	if (root == NULL)
		return vector;

	while (root || s.empty())
	{
		while (root)
		{
			s.push(root);
			result.push_back(root->val);
			root->left;
		}
		root = s.top();
		s.pop();
		root = root->right;
	}
	return result;
}
