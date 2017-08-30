class Solution
{
public:
    int calcDepth(TreeNode* n, int l)
    {
        if (!n)
        {
            return l;
        }

        int left = calcDepth(n->left, l + 1);
        int right = calcDepth(n->right, l + 1);

        return std::max(left, right);
    }
    int maxDepth(TreeNode* root)
    {
        return calcDepth(root, 0);
    }
};
