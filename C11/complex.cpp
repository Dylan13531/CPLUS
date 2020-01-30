/*************************************************************************
    > File Name: complex.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 19:08:41 2020
 ************************************************************************/
#include <iostream>
#include "mcomplex.h"

namespace MCOMPLEX
{
	Complex::Complex()
	{
		real = 0.0;
		imag = 0.0;
	}

	Complex::Complex(double a, double b)
	{
		real = a;
		imag = b;
	}

	Complex Complex::operator + (const Complex a) const
	{
		Complex temp;
		temp.real = real + a.real;
		temp.imag = imag + a.imag;
		return temp;
	}

	Complex Complex::operator - (const Complex b) const
	{
		Complex temp;
		temp.real = real - b.real;
		temp.imag = imag - b.imag;
		return temp;
	}

	Complex Complex::operator * (const Complex b) const
	{
		Complex temp;
		temp.real = real * b.real - imag*b.imag;
		temp.imag = real * b.imag + b.real*imag;
		return temp;
	}

	Complex Complex::operator * (const double d) const
	{
		Complex temp;
		temp.real = real * d;
		temp.imag = imag * d;
		return temp;
	}

	Complex Complex::operator ~ () const
	{
		Complex temp;
		temp.real = real;
		temp.imag = -imag;
		return temp;
	}

	Complex Complex::operator - () const
	{
		Complex temp;
		temp.real = -real;
		temp.imag = -imag;
		return temp;
	}

	std::ostream & operator << (std::ostream & os, const Complex f)
	{
		os << "(" << f.real << "," << f.imag << "i)";
		return os;
	}

	bool operator >> (std::istream & is, Complex & f)
	{
		double re,im;
		std::cout << "real: ";

		if (!(is >> re))
			return false;
		std::cout << "imaginary: "; 
		if (!(is >> im))
			return false;

		f.real = re;
		f.imag = im;
		return true;
	}
		
}
