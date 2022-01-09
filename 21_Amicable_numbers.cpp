#include <iostream> 	// amicable_number
unsigned long long int amicable_num();

int main()
{
	std::cout<< amicable_num();
return 0;
}

unsigned long long int amicable_num()
{
	size_t count {};
	size_t count_comp {};
	unsigned long long int sum {}; 
	for (int i=10000; i>=2; --i)
	{
		for (int j=1; j<=i/2; ++j)
		{
			if (i %j == 0)
			{
//				std::cout<< j << "\t";
				count += j;
			}
		}
		for (int j=1; j<=count/2; ++j)
		{
			if (count %j == 0)
			{
				count_comp += j;
			}
		}
		if (count_comp == i)
		{
//			std::cout<< count << "\t" << count_comp << std::endl;
			sum += count;
		}
		count = 0;
		count_comp = 0;
	}
	return sum;
}
