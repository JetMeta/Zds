// brute force ... o(n*log(n)) O(n*n)

class Solution
{
public:
    bool find(TreeNode* n, int v)
    {
        if (!n)
        {
            return false;
        }

        if (n->val == v)
        {
            return true;
        }

        if (v > n->val)
        {
            return find(n->right, v);
        }
        else
        {
            return find(n->left, v);
        }
    }

    void bfs(TreeNode* root, TreeNode* node, int k,bool& found)
    {
        if (found)
        {
            return;
        }

        if (node)
        {
            int val = k - node->val;

            if (val != node->val)
            {
                if (find(root, val))
                {
                    found = true;
                    return;
                }
            }

            bfs(root, node->left, k, found);
			
			if(!found)
			{
				bfs(root, node->right, k, found);
			}
        }
    }

    bool findTarget(TreeNode* root, int k)
    {
        bool found = false;
        bfs(root,root,k,found);
        return found;
    }
};
