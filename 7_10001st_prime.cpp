#include <iostream>
#include <climits>
void _10001_prime();

int main ()
{
	_10001_prime();
	
return 0;
}

void _10001_prime()
{
	int count = 0;
	int prime_count = 1;
	for (size_t i=3; i<INT_MAX; ++i)
	{
		for (int j =i-1; j>=2; --j)
		{
			if (i % j == 0)
			{
				++count;
			}
		}
		if (count == 0)
		{
//			std::cout<< i <<"\n";
			++prime_count;
		}
		else 
		{
			count = 0;
		}
		if (prime_count == 10001)
		{
			std::cout<< i << "\t";
			break;
		}
	}


}
