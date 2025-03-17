
#include "complexlab.h"

#include <iostream>

#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

int main() {

	ComplexStuff numb1(5.0, 7.0);
	ComplexStuff numb2(2.5, 3.1);

	ComplexStuff addanswers = numb1.addition(numb2);
	assert(addanswers.getTheImaginary() == 10.1);

	ComplexStuff subtractionanswer = numb1.subtraction(numb2);
	assert(subtractionanswer.getTheImaginary() == 3.9);

	double magnitudeanswer = numb1.magnitudevalue();
	assert(magnitudeanswer == 7.334124661);

	ComplexStuff conjugateanswer = numb1.conjugatevalue();
	assert(conjugateanswer.getTheImaginary() == -7.0);

	cout << "All tests had positive answers!";

	return 0;
}


