// too redundant
class Solution {
public:
	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};

public:
	int d(TreeNode* n, int& min_depth, int l)
	{
		if (l >= min_depth)
		{
			return min_depth;
		}

		if (!n)
		{
			return -1;
		}

		if (!n->left && !n->right)
		{
			return l;
		}

		const int left = d(n->left, min_depth, l + 1);
		const int right = d(n->right, min_depth, l + 1);

		if ((left != -1) && (right != -1))
		{
			min_depth = min(min_depth, min(left, right));
		}
		else
		{
			if (left != -1)
			{
				min_depth = min(min_depth, left);
			}
			else
			{
				min_depth = min(min_depth, right);
			}
		}

		return min_depth;
	}

	int minDepth(TreeNode* root) {
		if (!root)
		{
			return 0;
		}

		int min_depth = (numeric_limits<int>::max)();
		min_depth = d(root, min_depth, 1);

		return min_depth;
	}
};