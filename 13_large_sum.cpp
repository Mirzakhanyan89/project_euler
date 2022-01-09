#include <iostream> // 

int main()
{
	std::string str1 = "37107287533902102798797998220837590246510135740250";
	std::string str2 = "46376937677490009712648124896970078050417018260538";
	std::string str3 = "74324986199524741059474233309513058123726617309629";
	std::string str4 = "91942213363574161572522430563301811072406154908250";
	std::string str5 = "23067588207539346171171980310421047513778063246676";
	
	std::string str_1 = str1.substr(0, 12);
	std::string str_2 = str2.substr(0, 12);
	std::string str_3 = str3.substr(0, 12);
	std::string str_4 = str4.substr(0, 12);
	std::string str_5 = str5.substr(0, 12);
	
	long long num1 = std::stoll(str_1);
	long long num2 = std::stoll(str_2);
	long long num3 = std::stoll(str_3);
	long long num4 = std::stoll(str_4);
	long long num5 = std::stoll(str_5);

	long long sum = num1 + num2 + num3 + num4 + num5;
	std::cout<< sum;
return 0;
}
