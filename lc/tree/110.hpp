class Solution
{
public:
    int calcDepth(TreeNode* n,int l,bool& res)
    {
        if (!res)
        {
            return l;
        }

        if (!n)
        {
            return l;
        }

        int left = calcDepth(n->left, l + 1,res);
        int right = calcDepth(n->right, l + 1,res);

        if (abs(left - right) > 1)
        {
            res = false;
        }

        return std::max(left, right);
    }

    bool isBalanced(TreeNode* root)
    {
        bool res = true;
        calcDepth(root, 0, res);

        return res;
    }
};
