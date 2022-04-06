#include "Complex.h"

Complex Complex::sum(Complex n1)
{
	return Complex{ n1.re + this->re, (n1.im + this->im) };
}
void Complex::print()
{
	string sign = (this->im >= 0) ? "+i" : "-i";
	cout << this->re << sign << abs(this->im) << endl;
}
Complex Complex::minus(Complex n1)
{
	return Complex{ n1.re - this->re, (n1.im - this->im) };
}

Complex Complex::ymnozh(Complex n1)
{
	return Complex{ n1.re * this->re, n1.im * this->im };
}
Complex Complex::delenie(Complex n1)
{
	return Complex{ ((n1.re * this->re) + (n1.im * this->im)) / (pow(this->re, 2) + pow(this->im, 2)),(n1.im * this->re - n1.re * this->im) / (pow(this->re, 2) + pow(this->im, 2)) };
}
float Complex::mod()
{
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
}
