class Solution {
public:
bool isStrictlyPalindromic(int n)
{
	for (int i = 2; i <= 9; ++i)
	{
		if (!isCurrentBasePolindrome(n, i))
		{
			return false;
		}
	}
	return true;
}

bool isCurrentBasePolindrome(int num, int base)
{
	return is_polindrome( concvert_to_nedded_base(num, base) );
}

std::string concvert_to_nedded_base(int num, int base)
{
	std::string target_num = "";
	while (num > 1)
	{
		target_num += std::to_string(num % base);
		num /= base;
	}
	target_num += std::to_string(num);
	return target_num;
}

bool  is_polindrome (std::string str_num)
{
	for (int i = 0, j = str_num.length() - 1; i < str_num.length() / 2; ++i, --j)
	{
		if (str_num[i] != str_num[j])
		{
			return false;
		}
	}
	return true;
}
};