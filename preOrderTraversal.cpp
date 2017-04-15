/*
*问题：给出一颗二叉树，返回其结点的前序遍历，尝试使用非递归解决。
*答者：Seven17000
*/

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> result;
vector<int> preorderTraversal(TreeNode* root)
{//递归解决
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
{//非递归
	vector<int> result;
	stack<TreeNode*> s;

	if (root == NULL)
		return vector;

	while (root || ！s.empty())
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
