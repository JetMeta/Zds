class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		auto l = lower_bound(nums.cbegin(), nums.cend(), target);
		auto h = nums.cend();

		if (l != nums.end() && *l == target)
		{
			h = upper_bound(nums.cbegin(), nums.cend(), target);

			vector<int> v = { (int)(l - nums.cbegin()),(int)(h - nums.cbegin() - 1) };
			return v;
		}

		vector<int> v = { -1,-1 };
		return v;
	}
};
