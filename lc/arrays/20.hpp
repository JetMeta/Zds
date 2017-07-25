class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> ls;

        for (auto c = s.cbegin(); c != s.cend(); ++c)
        {
            if (*c == '(' || *c == '{' || *c == '[')
            {
                ls.push(*c);
            }
            else
            {
                if (ls.empty())
                {
                    return false;
                }
                else
                {
                    char cur = ls.top();
                    switch (*c)
                    {
                    case '}':
                        if (cur != '{')
                        {
                            return false;
                        }
                        break;
                    case ']':
                        if (cur != '[')
                        {
                            return false;
                        }

                        break;
                    case ')':
                        if (cur != '(')
                        {
                            return false;
                        }

                        break;
                    }

                    ls.pop();
                }
            }
        }

        if (ls.empty())
        {
            return true;
        }

        return false;
    }
};
