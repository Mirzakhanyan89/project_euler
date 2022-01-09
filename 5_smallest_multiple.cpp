#include <iostream>
#include <climits>
void smallest_multiple();

int main ()
{

	smallest_multiple();
return 0;
}

void smallest_multiple ()
{
	int count = 0;
	for (size_t i=20; i< INT_MAX; ++i)
	 {
	 	for (int j =2; j<=20; ++j)
		{
			if (i % j == 0)
			{
				++count;
			}
		}
		if (count == 19)
		{
			std::cout<< i << std::endl;
			break;
		}
		count = 0;
	 }
}
