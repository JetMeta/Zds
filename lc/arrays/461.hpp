class Solution
{
public:
	int bits4(int x)
	{
		switch (x)
		{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 1;
		case 5:
			return 2;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 2;
		case 13:
			return 3;
		case 14:
			return 3;
		case 15:
			return 4;
		}

		return 0;
	}

	int bits8(int x)
	{
		if (x == 0)
		{
			return 0;
		}
		else
		{
			if (x < 0x10)
			{
				return bits4(x);
			}
		}

		return bits4(x & 0xf) + bits4((x >> 4)&0xf);
	}

	int bits16(int x)
	{
		if (x == 0)
		{
			return 0;
		}
		else
		{
			if (x < 0x10)
			{
				return bits4(x);
			}
			else
			{
				if (x < 0x100)
				{
					return bits8(x);
				}
			}
		}

		return bits8(x & 0xff) + bits8((x >> 8) & 0xff);
	}

	int bits32(int x)
	{
		if (x == 0)
		{
			return 0;
		}
		else
		{
			if (x < 0x10)
			{
				return bits4(x);
			}
			else
			{
				if (x < 0x100)
				{
					return bits8(x);
				}
				else
				{
					if (x < 0x10000)
					{
						return bits16(x);
					}
				}
			}
		}

		return bits16(x & 0xffff) + bits16((x >> 16) & 0xffff);
	}

	int hammingDistance(int x, int y)
	{
		const int res = x^y;
	
		return  bits32(res);
	}
};
