/*
*问题：给出一颗二叉树，返回其结点的中序遍历，尝试使用非递归。
*答者：Seven17000
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> result;
vector<int> inorderTraversal(TreeNode *root) 
{//递归解决
	if (root == NULL)
		return result;

	if (root)
	{
		inorderTraversal(root->left);
		result.push_back(root->val);
		inorderTraversal(root->right);
	}

	return result;
}

vector<int> inorderTraversal(TreeNode* root)
{//非递归解决
	vector<int> result;
	stack<TreeNode*> s;

	if (root == NULL)
		return result;

	while (root || !s.empty())
	{
		while (root)
		{
			s.push(root);
			root = root->left;
		}
		root = s.top();
		result.push_back(root->val);
        s.pop();
		root = root->right;
    }
	return result;
}
