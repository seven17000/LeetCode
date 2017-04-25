/*
*���⣺����һ�Ŷ���������������ĺ������������ʹ�÷ǵݹ顣
*���ߣ�Seven17000
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> result;
vector<int> postorderTraversal(TreeNode *root)
{//�ݹ�ʵ��
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
{//�ǵݹ�ʵ��
	vector<int> result;
	stack<int> s;
	TreeNode* cur = root;
	TreeNode* pre = NULL;

	if (root == NULL)
		return result;

	while (cur)
	{//�ߵ�������
		s.push(cur);
		cur = cur->left;
	}

	while (!s.empty())
	{
		cur = s.top();
		if (cur->right == NULL || cur->right == pre)
		{//��һ�������Һ���Ϊ�ջ��߱����ʹ���ʱ�����ʾ�ý����Ա�����
			result.push_back(cur->val);
			pre = cur;
			s.pop();
		}
		else
		{//��������Һ���
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
