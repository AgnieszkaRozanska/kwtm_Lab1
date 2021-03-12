#include <iostream> // std::cout, std::cin
#include <string> // std::string
#include<trygonometria.h>

int main()
{
	double wynik_sin = degreemath::sin(30);
	std::cout << wynik_sin << std::endl;

	double wynik_cos = degreemath::cos(60);
	std::cout << wynik_cos << std::endl;

	double wynik_tg = degreemath::tg(45);
	std::cout << wynik_tg << std::endl;

	double wynik_ctg = degreemath::ctg(45);
	std::cout << wynik_ctg << std::endl;
	
	//return 0;
}


