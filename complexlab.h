#ifndef COMPLEXLAB_H

#define COMPLEXLAB_H

class ComplexStuff {
private:
	float realnumber;
	float imaginarynumber;

public:
	ComplexStuff(float realnumber, float imaginarynumber);

	ComplexStuff addition(const ComplexStuff& other) const;
	ComplexStuff subtraction(const ComplexStuff& other) const;
	ComplexStuff multiplication(const ComplexStuff& other) const;
	ComplexStuff division(const ComplexStuff& other) const;
	ComplexStuff negation() const;

	float magnitudevalue() const;

	ComplexStuff conjugatevalue() const;

	float getTheReals();
	float getTheImaginary() const;

	void prettyPrint() const;

};

#endif