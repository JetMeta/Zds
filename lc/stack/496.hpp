//2017-09-09 v1.bruteforce v2@lc
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
    {
        stack<int> s;
        unordered_map<int, int> m;

        for (int n : nums)
        {
            while (s.size() && s.top() < n)
            {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }

        vector<int> res;
        for (int n : findNums)
            res.push_back(m.count(n) ? m[n] : -1);

        return res;
    }
};
