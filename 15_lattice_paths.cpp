#include <iostream>

int main()
{

	int n = 20;
	int j = 1;
	for (int i=1; i<= n; ++i)
	{
		j = j* (n+i)/i;
	}
	std::cout<< j << std::endl;
}
