#include <iostream>
size_t sum_square_difference();

int main ()
{
	std::cout<< sum_square_difference() << std::endl;	
return 0;
}

size_t sum_square_difference ()
{
	size_t square_sum {};
	size_t sum_square {};
	for (int i=1; i<100; ++i)
	{
		square_sum += i*i;
		sum_square += i;
	}
	sum_square *= sum_square;
//	std::cout<< sum_square << std::endl << square_sum << std::endl; 
	return (sum_square - square_sum);
}
