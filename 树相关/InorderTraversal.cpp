/*
*���⣺����һ�Ŷ�����������������������������ʹ�÷ǵݹ顣
*���ߣ�Seven17000
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> result;
vector<int> inorderTraversal(TreeNode *root) 
{//�ݹ���
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
{//�ǵݹ���
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
