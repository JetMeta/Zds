class Solution
{
public:
    int length = 0;
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution;
    ListNode* h;

    Solution(ListNode* head)
    {
        h = head;
        ListNode* node = head;

        while (node)
        {
            ++length;
            node = node->next;
        }

        distribution.param(std::uniform_int_distribution<int>::param_type(1, length));
    }

    int getRandom()
    {
        const int dice = distribution(generator);

        ListNode* n = h;
        for (size_t i = 1 ; i < dice; ++i)
        {
            n = n->next;
        }

        return n->val;
    }
};
