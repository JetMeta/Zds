class Solution
{
public:
    string f(int n)
    {
        if (n == 1)
            return "1";

        string s = f(n - 1);
        string res;
        res.reserve(32);

        for (auto c = s.cbegin(); c != s.cend();)
        {
            auto start_it = c;
            int cnt = 1;

            while ((++c != s.cend()) && (*c == *start_it))
            {

            }

            cnt = static_cast<int>(c - start_it);

            res.push_back(cnt + '0');
            res.push_back(*start_it);
        }

        return res;
    }

    string countAndSay(int n)
    {
        return f(n);
    }
};
