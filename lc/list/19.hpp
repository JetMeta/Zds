class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int idx = 0;

        ListNode* cur = head;
        ListNode* del = head;
        ListNode* prev = head;

        while (cur)
        {
            if (idx > n - 1)
            {
                prev = del;
                del = del->next;
            }

            ++idx;

            cur = cur->next;
        }

        if (del != head)
        {
            prev->next = del->next;

            return head;
        }
        else
        {
            head = head->next;
            return head;
        }
    }
};
