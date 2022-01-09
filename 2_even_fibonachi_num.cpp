#include <iostream>
unsigned long long int fibonacci(int);

int main()
{
	int n = 4000000;
	unsigned long long int num1 {};
	unsigned long long int num2 {1};
	unsigned long long int next {};
	unsigned long long int sum_even {};
//	std::cout<< "Enter any number, i will count Fibonachi number: \n";
//	std::cin>> n;
	next = num1 + num2;
	while (next <= n)
	{
		num1 = num2;
		num2 = next;
		next = num1 + num2;
		if (next %2 == 0)
		{
			sum_even += next;
		}
		std::cout<< next << "\t";
	}
		std::cout<< "\n" << sum_even << std::endl;
return 0;
}

