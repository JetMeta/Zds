class Solution
{
public:
    TreeNode* f(vector<int>::iterator l, vector<int>::iterator r)
    {
        TreeNode* node = nullptr;

        if (l > r)
        {
            return node;
        }

        auto it = max_element(l, r);

        if (it != r)
        {
            node = new TreeNode(*it);
            node->left = f(l, it);
            node->right = f(it + 1, r);
        }

        return node;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
    {
        return f(nums.begin(), nums.end());
    }
};
