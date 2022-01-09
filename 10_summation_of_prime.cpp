#include <iostream>
#include <cmath>
void summation();

int main()
{
	summation();
return 0;
}

void summation()
{
	long long sum = 2+3;
	int count = 0;
	for (int i=4; i<= 2000000; ++i)
	{
		for (int j=sqrt(i); j>=2; --j)
		{
			if (i %j == 0 )		
			{
				++count;
			}
		}
		if (count == 0)
		{
			sum += i;
		}
		else 
		{
			count = 0;
		}
	}
	std::cout<< sum << std::endl;
}

