class Solution
{
public:
    int odd_cnt(const string& s,size_t idx,const size_t len)
    {
        int cnt = 0;
        for(size_t i = 0 ; ((idx+i) <len)&&((idx-i) >= 0) ; ++i)
        {
            if(s[idx + i] == s[idx -i])
            {
                ++cnt;
            }
            else
            {
                break;
            }
        }

        return cnt;
    }

    int even_cnt(const string& s,size_t idx,const size_t len)
    {
        int cnt = 0;
        for(size_t i = 0 ; ((idx+i+1) <len)&&((idx-i) >= 0) ; ++i)
        {
            if(s[idx-i] == s[idx+i+1])
            {
                ++cnt;
            }
            else
            {
                break;
            }
        }
        return cnt;
    }

    int countSubstrings(string s)
    {
        const size_t len = s.length();
        int cnt = 0;

        for (size_t i = 0; i < len; ++i)
        {
            cnt += odd_cnt(s,i,len);
            cnt += even_cnt(s,i,len);
        }

        return cnt;
    }
};
