#define _USE_MATH_DEFINES
#include "trygonometria.h"
#include <cmath>




double degreemath::sin(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radian;

	radian = (degree * M_PI) / 180;
	return std::sin(radian);
}
double degreemath::cos(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radian;

	radian = (degree * M_PI) / 180;
	return std::cos(radian);
}
double degreemath::tg(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radian;

	radian = (degree * M_PI) / 180;
	return std::tan(radian);
}
double degreemath::ctg(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radian;

	radian = (degree * M_PI) / 180;
	
	return 1 / (std::tan(radian));
}



