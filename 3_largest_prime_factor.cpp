#include <iostream>	// 3_largest_prime
void largest_prime (size_t );

int main()
{
	size_t num = 600851475143;
//	std::cin>> num;
	largest_prime (num);
	return 0;
}

void largest_prime (size_t num)
{
	int tmp {};
	int count {};
	int divider {};
	for (int i=2; i<=num/2; ++i)
	{
		if (num %i == 0)
		{
			tmp = num/i;
			for (int j =2; j<=tmp/2; ++j)
			{
				if (tmp %j == 0)
				{
					++count;
				}
				if ((count == 0) and (tmp > divider))
				{
					divider = tmp;
				}
				count = 0;
			}
		}
	}
	std::cout<< divider << std::endl;
}
