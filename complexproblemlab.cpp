// main file

#include "complexlab.h"
#include <iostream>

int main() {


	ComplexStuff n1(5.0, 7.0);
	ComplexStuff n2(2.5, 3.1);


	ComplexStuff num3 = n1.addition(n2);
	num3.prettyPrint();

	ComplexStuff num4 = n1.subtraction(n2);
	num4.prettyPrint();

	float magnitudeoutput = n1.magnitudevalue();

	std::cout << "Magnitude value is: " << magnitudeoutput << std::endl;

	return 0;

}