class Solution
{
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        stack<TreeNode*> s;
        vector<int> v;

        TreeNode* cur = root;

        while (!s.empty() || cur)
        {
            if (cur)
            {
                s.push(cur);
                cur = cur->left;
            }
            else
            {
                cur = s.top();
                s.pop();
                v.push_back(cur->val);
                cur = cur->right;
            }
        }

        return v;
    }
};
