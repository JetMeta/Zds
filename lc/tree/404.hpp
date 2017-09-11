class Solution
{
public:
    bool has_left_leaf(TreeNode* node)
    {
        if (node->left && (node->left->left == nullptr) && (node->left->right == nullptr))
        {
            return true;
        }

        return false;
    }

    void f(TreeNode* node,int& sum)
    {
        if (!node)
        {
            return;
        }

        if (has_left_leaf(node))
        {
            sum += node->left->val;
        }
        else
        {
            if (node->left)
            {
                f(node->left, sum);
            }
        }

        if (node->right)
        {
            f(node->right,sum);
        }
    }

    int sumOfLeftLeaves(TreeNode* root)
    {
        int sum = 0;

        f(root, sum);

        return sum;
    }
};
