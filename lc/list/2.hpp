class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* sum = nullptr;
        ListNode* head = nullptr;

        ListNode* cur1 = l1;
        ListNode* cur2 = l2;

        int carrier = 0;
        int left = 0;
        while (cur1 && cur2)
        {
            int val = cur1->val + cur2->val + carrier;

            if (val > 9)
            {
                left = val - 10;
                carrier = 1;
            }
            else
            {
                carrier = 0;
                left = val;
            }

            if (!head)
            {
                head = new ListNode(left);
                sum = head;
            }
            else
            {
                sum->next = new ListNode(left);
                sum = sum->next;
            }

            cur1 = cur1->next;
            cur2 = cur2->next;
        }

        ListNode* left_list = cur1 ? cur1 : cur2;

        while (left_list)
        {
            int val = left_list->val + carrier;

            if (val > 9)
            {
                left = val - 10;
                carrier = 1;
            }
            else
            {
                carrier = 0;
                left = val;
            }

            if (!head)
            {
                head = new ListNode(left);
                sum = head;
            }
            else
            {
                sum->next = new ListNode(left);
                sum = sum->next;
            }

            left_list = left_list->next;
        }

        if (carrier)
        {
            sum->next = new ListNode(carrier);
            sum = sum->next;
        }

        return head;
    }
};