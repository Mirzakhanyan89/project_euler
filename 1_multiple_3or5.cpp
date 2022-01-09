#include <iostream>	// multiple3or5
void multiple_3or5 ();

int main()
{
	multiple_3or5 ();
return 0;
}

void multiple_3or5 ()
{
	int sum = 0;
       	for (int i=0; i< 1000; ++i)
       	{
       		if ((i %3 == 0) or (i %5 == 0))
		{
			std::cout<< i << "  " ;
			sum += i;
		}	
       	}	   
       	std::cout<< " \n sum is " << sum << std::endl;    
}
