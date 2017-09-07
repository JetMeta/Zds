class Solution {
public:
	int thirdMax(vector<int>& nums) {
		const size_t length = nums.size();

		if (length == 1)
		{
			return nums[0];
		}

		if (length == 2)
		{
			return max(nums[0], nums[1]);
		}

		vector<int> r(3,numeric_limits<int>::min());
		bitset<3> b;

		for (size_t i = 0; i < length; i++)
		{
			for (size_t j = 0; j < 3; ++j)
			{
				if (nums[i] == r[j])
				{
					b[j] = true;
					break;
				}

				if (nums[i] > r[j])
				{
					for (size_t k = 2; k>j; --k)
					{
						b[k] = b[k - 1];
						r[k] = r[k - 1];
					}
					r[j] = nums[i];
					b[j] = true;
					break;
				}
			}
		}

		return b[2]?r[2]:r[0];
	}
};
