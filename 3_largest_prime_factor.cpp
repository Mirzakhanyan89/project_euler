#include <iostream>
//	#include <climits>
void largest_prime (size_t tmp);

int main()
{
	size_t tmp = 600851475143;
	std::cin>> tmp;
	largest_prime (tmp);
	return 0;
}

void largest_prime (size_t tmp)
{
	for (size_t i = tmp/2; i >= 2; --i)
	{
		if (tmp % i == 0)
		{
			std::cout<< i<< "\t";
		//	return i;
		//	continue;
		}
	}
}
