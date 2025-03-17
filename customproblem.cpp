// implementation file 

#include "complexlab.h"

#include <iostream>
#include <cmath>

ComplexStuff::ComplexStuff (float realnumber, float imaginarynumber): realnumber(realnumber), imaginarynumber(imaginarynumber){}

ComplexStuff ComplexStuff::addition(const ComplexStuff& other) const {
	return ComplexStuff(realnumber + other.realnumber, imaginarynumber + other.imaginarynumber);
}

ComplexStuff ComplexStuff::subtraction(const ComplexStuff& other) const {
	return ComplexStuff(realnumber - other.realnumber, imaginarynumber - other.imaginarynumber);

}

ComplexStuff ComplexStuff::multiplication(const ComplexStuff& other) const {
	return ComplexStuff(realnumber * other.realnumber - imaginarynumber * other.imaginarynumber, realnumber * other.imaginarynumber + imaginarynumber * other.realnumber);
}

ComplexStuff ComplexStuff::division(const ComplexStuff& other) const {
	float denom = other.realnumber * other.realnumber + other.imaginarynumber * other.imaginarynumber;
	return ComplexStuff((realnumber * other.realnumber + imaginarynumber * other.imaginarynumber) / denom, imaginarynumber * other.realnumber - realnumber * other.imaginarynumber / denom);
}

ComplexStuff ComplexStuff::negation() const {
	return ComplexStuff(-realnumber, -imaginarynumber);
}

float ComplexStuff::magnitudevalue() const {
	return sqrt(realnumber * realnumber + imaginarynumber * imaginarynumber); 
}

ComplexStuff ComplexStuff::conjugatevalue() const {
	return ComplexStuff(realnumber, -imaginarynumber);
}

float ComplexStuff::getTheReals() {
	return realnumber;
}

float ComplexStuff::getTheImaginary() const {
	return imaginarynumber;
}

void ComplexStuff::prettyPrint() const {

	std::cout << realnumber << " + " << imaginarynumber << "i" << std::endl;
}