/*************************************************************************
    > File Name: complex.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 18:42:28 2020
 ************************************************************************/
#include<iostream>
#ifndef mcomplex_h_
#define mcomplex_h_

namespace MCOMPLEX
{
	class Complex
	{
		private:
			double real;
			double imag;

		public:
			Complex();
			Complex(double a, double b=0);
			Complex operator + (const Complex a) const;
			Complex operator - (const Complex b) const;
			Complex operator * (const Complex c) const;
			Complex operator * (const double d) const;
			Complex operator ~ () const;
			Complex operator - () const;

			friend Complex operator * (const double a, const Complex e) 
			{ return e*a;}
			friend std::ostream & operator << (std::ostream & os, const Complex f);
			friend bool operator >> (std::istream & is, Complex & f);
	};
}
#endif
