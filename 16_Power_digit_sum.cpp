#include <iostream>

int main()
{
	std::string str_all = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
/*	int base = 2;
	int power = 4;
	unsigned long long int num = 1;
	std::cout<< "Enter base number, and then the power: \n";
	std::cin>> base >> power;
	for (int i=1; i<=power; ++i)
	{
		num *= base;
	}
	std::cout<< num << std::endl;	
*/
	const int size = 9;
	std::string str;
	unsigned long long int num {};
	int sum{};
	while (str_all.size() != 0)
	{
		if (str_all.size() >= size)
		{
			str = str_all.substr(0, size);
			str_all.erase(0, size);
			num = std::stoi(str);
			while (num != 0)
			{
				sum += num %10;
				num /= 10;
			}
		}
		else
		{
			str = str_all.substr(0, str_all.size());
			str_all.erase(0, str_all.size());
			num = std::stoi(str);
			while (num != 0)
			{
				sum += num %10;
				num /= 10;
			}
		}		
	}	
	std::cout<< sum << std::endl;
return 0;
}
