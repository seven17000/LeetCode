/*
*���⣺����һ�Ŷ���������������ֵ�Ĳ������
*���ߣ�Seven17000
*/
vector<vector<int>> levelOrder(TreeNode *root)
{
	vector<vector<int>> result;
	queue<TreeNode*> q;
	if (root == NULL)
		return result;

	q.push(root);
	while (!q.empty())
	{
		int size = q.size();
		vector<int> level;

		for (int i = 0; i<size; ++i)
		{
			TreeNode * head(q.front());
			level.push_back(head->val);
			q.pop();

			if (head->left)
				q.push(head->left);

			if (head->right)
				q.push(head->right);
		}
		result.push_back(level);
	}
	return result;
}