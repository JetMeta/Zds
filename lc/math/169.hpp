class Solution
{
public:
	int majorityElement(vector<int>& nums) {
		size_t length = nums.size();
		
		unordered_map <int, int> m;

		for (size_t i = 0; i < length; i++)
		{
			++m[nums[i]];
		}

		int majorityIdx = 0;
		int majorityEle = -1;
		
		for (auto it = m.begin(); it != m.end(); ++it)
		{
			if (it->second > majorityIdx)
			{
				majorityEle = it->first;
				majorityIdx = it->second;
			}
		}

		return majorityEle;
	}
};
