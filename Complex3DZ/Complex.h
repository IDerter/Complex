#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct Complex {
	double re = 0;
	double im = 0;
	Complex sum(Complex n1);
	Complex minus(Complex n1);
	Complex ymnozh(Complex n1);
	Complex delenie(Complex n1);
	void print();
	float mod();
	Complex(double valre = 4, double valim = -2)
	{
		re = valre;
		im = valim;
	}
	Complex(const Complex& obj)
	{
		re = obj.re;
		im = obj.im;
	}
	~Complex()
	{
		//std::cout << "Destructor" << std::endl;
	}
};



#endif // ! COMPLEX_H


