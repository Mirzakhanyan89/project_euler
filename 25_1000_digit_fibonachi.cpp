#include <iostream>
unsigned long long int fibonacci(int);

int main()
{
	int n;
	std::cout<< "Enter any number, i will count Fibonachi number: \n";
	std::cin>> n;
	std::cout<< fibonacci(n);
return 0;
}

unsigned long long int fibonacci(int n)
{
	if (n <= 1)
	{	
		return n;
	}
	return (fibonacci(n-2) + fibonacci(n-1));
}
