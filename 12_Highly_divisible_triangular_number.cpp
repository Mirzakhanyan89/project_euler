#include <iostream>	// 12_
#include <climits>
#include <cmath>
void triangular_number();

int main()
{
	triangular_number();
return 0;
}

void triangular_number()
{
	int num = 1;
	int count = 1;
//	std::cout<< __LINE__ << "\t";
	for (int  i=2; i<30 /* INT_MAX*/; i++)
	{
		num += i;
		for (int j=1; j<= num/2 ; ++j)
		{
//			std::cout<< __LINE__ << "\t";
			if (num %j == 0)
			{
//				std::cout<< __LINE__ << "\t";
				++count;
			}
		}
		if (count == 5)
		{
//			std::cout<< __LINE__ << "\t";
			std::cout<< num << std::endl;
			break;
		}
		count = 1;
	}
}
