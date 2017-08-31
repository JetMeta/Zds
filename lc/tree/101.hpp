class Solution
{
public:
    bool isMirror(TreeNode* l, TreeNode* r)
    {
        if (l == NULL && r == NULL)
        {
            return true;
        }

        if ((!l && r) || (l && !r))
        {
            return false;
        }

        if (l->val != r->val)
        {
            return false;
        }

        bool res = isMirror(l->left, r->right);

        if (res)
        {
            res = isMirror(l->right, r->left);
        }

        return res;
    }

    bool isSymmetric(TreeNode* root)
    {
        if (!root)
        {
            return true;
        }

        return isMirror(root->left, root->right);
    }
};
