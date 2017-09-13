class Solution
{
public:
ListNode* rotateRight(ListNode* head, int k) {
		if (!head || !head->next || k < 1)
		{
			return head;
		}

		int length = 0;
		int step = 0;
		ListNode* prev_new_head = nullptr;
		ListNode* prev = nullptr;
		ListNode* new_head = nullptr;
		ListNode* cur = head;

		while(cur)
		{
			if (step < k-1)
			{
				prev = cur;
				cur = cur->next;
				++step;
			}
			else
			{
				if (!new_head)
				{
					new_head = head;
				}
				else
				{
					prev_new_head = new_head;
					new_head = new_head->next;
				}

				prev = cur;
				cur = cur->next;
			}

			++length;
		}

		if (new_head)
		{
			if (prev_new_head)
			{
				prev_new_head->next = nullptr;
			}
			if (prev && new_head && new_head != head)
			{
				prev->next = head;
			}

			return new_head;
		}
		else
		{
			return rotateRight(head, k%length);
		}
	}
};
