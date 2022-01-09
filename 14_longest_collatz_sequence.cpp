#include <iostream>

int main()
{
	int count = 1;
	int count_max = 1;
	int longest_collatz {};
	int tmp {};
	for (int i=2; i<=100000; ++i)
	{
		tmp = i;
		while (tmp != 1)
		{
			if (tmp %2 == 0)
			{
				++count;
				tmp /= 2;
				if (tmp == 1)
				{
					if (count > count_max)
					{
						count_max = count;
						longest_collatz = i;
					}
				}
				else
					continue;
			}
			else
			{
				++count;
				tmp = tmp*3 + 1;
			}
		}
		count = 1;
	}
	std::cout<< "Longest collatz is " << longest_collatz << "\n Max count is " << count_max << std::endl ;
return 0;
}
