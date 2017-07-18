class Solution {
public:
	string addBinary(string a, string b) {
		size_t a_len = a.size();
		size_t b_len = b.size();

		int carry = 0;
		int b_idx = b_len - 1;
		int a_idx = a_len - 1;

		int c_idx = max<int>(a_len, b_len);
		string str(c_idx + 1, '\0');

		while (b_idx > -1 || a_idx > -1)
		{
			int sum = (a_idx > -1 ? a[a_idx] - '0' : 0) + (b_idx > -1 ? b[b_idx] - '0' : 0) + carry;

			char cur = sum > 1 ? (sum - 2 + '0'):(sum + '0');
			carry = sum / 2;
			str[c_idx] = cur;

			--c_idx;
			--a_idx;
			--b_idx;
		}

		if (carry)
		{
			str[c_idx] = '1';

			return str;
		}
		else
		{
			return string(str.begin() + 1, str.end());
		}
	}
};
