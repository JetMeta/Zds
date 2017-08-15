class Solution
{
public:
    void tree2str(string& str, TreeNode* t)
    {
        if (!t)
        {
            return;
        }

        str.append(std::to_string(t->val));

        if (t->left)
        {
            str.push_back('(');
            tree2str(str,t->left);
            str.push_back(')');
        }

        if ((!t->left) && t->right)
        {
            str.push_back('(');
            str.push_back(')');
        }

        if (t->right)
        {
            str.push_back('(');
            tree2str(str,t->right);
            str.push_back(')');
        }
    }

    string tree2str(TreeNode* t)
    {
        string str;
        tree2str(str, t);

        return str;
    }
};
