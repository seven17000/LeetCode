/*
*问题：给出一颗二叉树，返回其结点的后序遍历，尝试使用非递归。
*答者：Seven17000
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> result;
vector<int> postorderTraversal(TreeNode *root)
{//递归实现
	if (root == NULL)
		return result;

	if (root)
	{
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		result.push_back(root->val);
	}

	return result;
}
vector<int> PostOrder(TreeNode* root)
{//非递归实现
	vector<int> result;
	stack<int> s;
	TreeNode* cur = root;
	TreeNode* pre = NULL;

	if (root == NULL)
		return result;

	while (cur)
	{//走到最左孩子
		s.push(cur);
		cur = cur->left;
	}

	while (!s.empty())
	{
		cur = s.top();
		if (cur->right == NULL || cur->right == pre)
		{//当一个结点的右孩子为空或者被访问过的时候则表示该结点可以被访问
			result.push_back(cur->val);
			pre = cur;
			s.pop();
		}
		else
		{//否则访问右孩子
			cur = cur->right;
			while (cur)
			{
				s.push(cur);
				cur = cur->left;
			}
		}
	}
	return result;
}
