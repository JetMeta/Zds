class Solution
{
public:
	void inorder2(TreeNode* root,int* last,bool & init,bool& res)
	{
		if (root)
		{
			inorder2(root->left,last, init,res);

			{
				if (!init)
				{
					init = true;
					*last = root->val;
				}
				else
				{
					if (root->val <= *last)
					{
						res = false;
						return;
					}
					else
					{
						*last = root->val;
					}
				}
			}

			inorder2(root->right, last,init,res);
		}
	}

    bool isValidBST(TreeNode* root)
    {
		int v = 0;
		bool res = true;
		bool init = false;
		inorder2(root, &v,init, res);

		return res;
    }
};
