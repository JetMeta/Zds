class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int w=0, h=0;

        for (const auto& var : moves)
        {
            switch (var)
            {
            case 'U':
                --h;
                break;
            case 'D':
                ++h;
                break;
            case 'L':
                ++w;
                break;
            case 'R':
                --w;
                break;
            }
        }

        if (w == 0 && h == 0)
        {
            return true;
        }

        return false;
    }
};
