/*************************************************************************
    > File Name: vector.h
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 15:50:47 2020
 ************************************************************************/

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>

namespace VECTOR
{
	class Vector
	{
		public: enum Mode {RECT, POL};

		private:
			double x;
			double y;
			double mag;
			double ang;
			Mode mode;
			void set_mag();
			void set_ang();
			void set_x();
			void set_y();

		public:
			Vector();
			Vector(double n1, double n2, Mode form=RECT);
			void reset(double n1, double n2, Mode form=RECT);
			~Vector();
			double xval() const{return x;}
			double yval() const{return y;}
			double magval() const {return mag;}
			double angval() const {return ang;}
			void polar_mode();
			void rect_mode();

			Vector operator + (const Vector & b) const;
			Vector operator - (const Vector & b) const;
			Vector operator - () const;
			Vector operator * (double n) const;

			friend Vector operator * (double n, const Vector & b)
			{return b*n;}

			friend std::ostream & operator << (std::ostream & os, const Vector & b);
	};
}
#endif
