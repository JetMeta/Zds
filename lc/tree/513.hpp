class Solution
{
public:
    void f(TreeNode* node, int level, int& max_level, int& left_most_val)
    {
        if (node)
        {
            if (!node->left && !node->right)
            {
                if (level > max_level)
                {
                    max_level = level;
                    left_most_val = node->val;
                }

                return;
            }
        }

        if (node->left)
        {
            f(node->left, level+1, max_level, left_most_val);
        }

        if (node->right)
        {
            f(node->right, level+1, max_level, left_most_val);
        }
    }

    int findBottomLeftValue(TreeNode* root)
    {
        int max_level = 0;
        int left_most_val = root->val;
        f(root, 0, max_level, left_most_val);

        return left_most_val;
    }
};
