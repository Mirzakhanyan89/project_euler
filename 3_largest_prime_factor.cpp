#include <iostream>	// 3_largest_prime
#include <cmath>
void largest_prime (size_t );
bool is_prime (int);

int main()
{
	size_t num = 600851475143;
//	std::cin>> num;
	largest_prime (num);
//	std::cout<< is_prime(6857);	
return 0;
}

bool is_prime (int num)
{
	for (int i =sqrt(num); i>=2; --i)
	{
		if (num %i == 0)
		{
			return false;
		}
	}
			return true;
}

void largest_prime (size_t num)
{
	int count {};
	for (int i=sqrt(num); i>=2; --i)
	{
		if (num %i == 0 and is_prime(i))
		{
			
/*			for (int j=sqrt(i); j>=2; --j)
			{
				if (i %j == 0)
				{
					++count;
				}
			}
			if (count == 0)
			{
*/				std::cout<< i << std::endl;
				break;
/*			}
			count = 0;
*/		}
	}
}
