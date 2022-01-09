#include <iostream>
unsigned long long int fact(int);

int main()
{
	int n=1;
	std::cout<< "Enter any number, for Factorial:\n";
	std::cin>> n;
	std::cout<< fact(n);

return 0;
}

unsigned long long int fact(int n)
{
	if (n <= 0)
	{	return 1;  }
	return n*fact(n-1);
}
