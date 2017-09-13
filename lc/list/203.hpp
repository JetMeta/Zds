class Solution
{
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        if (!head)
        {
            return head;
        }

        ListNode* new_head = head;

        while (new_head && new_head->val == val)
        {
            ListNode* next = new_head->next;
            delete new_head;
            new_head = next;
        }

        ListNode* cur = new_head;
        ListNode* prev = new_head;
        while (!cur)
        {
            if (cur->val == val)
            {
                prev->next = cur->next;
                ListNode* next = cur->next;
                delete cur;
                cur = next;
            }
            else
            {
                prev = cur;
                cur = cur->next;
            }
        }

        return new_head;
    }
};
