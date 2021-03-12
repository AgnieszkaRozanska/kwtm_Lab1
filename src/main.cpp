#define _USE_MATH_DEFINES
#include <iostream> // std::cout, std::cin
#include <string> // std::string
#include<laborkaConfig.h>

#ifdef USE_TRIGONOMETRY_DEGREE
#include<trygonometria.h>
#else
#include <cmath>
#endif


int main()
{

#ifdef USE_TRIGONOMETRY_DEGREE
	double wynik_sin = degreemath::sin(30);
	std::cout << wynik_sin << std::endl;

	double wynik_cos = degreemath::cos(60);
	std::cout << wynik_cos << std::endl;

	double wynik_tg = degreemath::tg(45);
	std::cout << wynik_tg << std::endl;

	double wynik_ctg = degreemath::ctg(45);
	std::cout << wynik_ctg << std::endl;
#else
	//result = cos(pi / 4.0);

	double wynik_sin = sin(M_PI/6.0);
	std::cout << wynik_sin << std::endl;

	double wynik_cos = cos(M_PI / 3.0);
	std::cout << wynik_cos << std::endl;

	double wynik_tg = tan(M_PI / 4.0);
	std::cout << wynik_tg << std::endl;

	double wynik_ctg = 1/tan(M_PI / 4.0);
	std::cout << wynik_ctg << std::endl;

#endif

	//do commitu 2
	/*double wynik_sin = degreemath::sin(30);
	std::cout << wynik_sin << std::endl;

	double wynik_cos = degreemath::cos(60);
	std::cout << wynik_cos << std::endl;

	double wynik_tg = degreemath::tg(45);
	std::cout << wynik_tg << std::endl;

	double wynik_ctg = degreemath::ctg(45);
	std::cout << wynik_ctg << std::endl;*/

	//return 0;
}


