class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* cur = head, *prev = nullptr, *next= nullptr;

        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        return prev;
    }
};
