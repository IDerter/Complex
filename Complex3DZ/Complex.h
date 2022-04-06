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
	Complex(double valre, double valim)
	{
		re = valre;
		im = valim;
	}
	//~Complex()
//	{
	//	std::cout << "Destructor";
	//}
};



#endif // ! COMPLEX_H


