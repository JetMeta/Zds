class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        for (auto it = nums2.begin(); it < nums2.begin() + n; ++it)
        {
            auto it2 = lower_bound(nums1.begin(), nums1.begin() + m + static_cast<int>(it - nums2.begin()), *it);
            nums1.insert(it2, *it);
        }
        nums1.resize(m + n);
    }
};
