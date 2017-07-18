class Solution
{
public:
    static int get_cnt(const char c)
    {
        if (c < '2')
        {
            return 0;
        }

        if((c > '1' && c < '7') || c == '8')
        {
            return 3;
        }

        if(c == '9' || c == '7')
        {
            return 4;
        }

        return 0;
    }

    static char get_n(const char c,const int n)
    {
        if(c >= '0' && c <= '9')
        {
            switch (c - '0')
            {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            {
                {
                    if(n >= -1 && n < 3)
                    {
                        return 'a' + (c-'2')*3 + n;
                    }
                }
            }
            break;
            case 7:
                if(n > -1 && n < 4)
                {
                    return 'a' + (c-'2')*3 + n;
                }
                break;
            case 8:
                if(n > -1 && n < 3)
                {
                    return 'a' + (c-'2')*3 + n+1;
                }
                break;
            case 9:
                if(n > -1 && n < 4)
                {
                    return 'a' + (c-'2')*3 + n+1;
                }
                break;
            }
        }

        return 0;
    }

    static void gen_str(vector<string>& mid,string& digits,vector<string>& v)
    {
        size_t len = digits.length();

        if(len == 0)
        {
            v.insert(v.end(),mid.begin(),mid.end());

            return;
        }

        char c = digits[0];

        digits.erase(digits.begin());

        vector<string> mid_tmp;

        const int cnt = get_cnt(c);

        for(int i = 0 ; i < cnt; ++i)
        {
            if(mid.empty())
            {
                string s;
                s.push_back(get_n(c,i));
                mid_tmp.push_back(s);
            }
            else
            {
                for(vector<string>::const_iterator it = mid.begin(); it!=mid.end(); ++it)
                {
                    string s = *it;
                    s.push_back(get_n(c,i));
                    mid_tmp.push_back(s);
                }
            }
        }

        mid.clear();
        mid = mid_tmp;

        gen_str(mid,digits,v);
    }

    static void gen_str(string digits,vector<string>& v)
    {
        vector<string> mid;
        gen_str(mid,digits,v);
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> v;
        gen_str(digits,v);

        return v;
    }
};