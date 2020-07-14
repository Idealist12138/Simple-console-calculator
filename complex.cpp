#include <iostream>
#include "complex.h"
using namespace std;
complex::complex(){}
complex::~complex(){}
void complex::print()
{
    cout << "("<<real;
    if(image > 0)
        cout << "+";
    if(image != 0)
        cout << image << "i"<<")";
}
complex operator + (complex a,complex b)
{
    complex temp;
	temp.real= a.real +b.real ;
	temp.image= a.image +b.image ;
	return temp;
}
complex operator - (complex a,complex b)
{
	complex temp;
	temp.real= a.real -b.real ;
	temp.image= a.image -b.image ;
	return temp;
}
complex operator * (complex a,complex b)
{
	complex temp;
	temp.real= a.real *b.real -a.image *b.image ;
	temp.image =a.real *b.image +a.image *b.real ;
	return temp;
}
complex operator / (complex a,complex b)
{
	complex temp;
	float tt;
	tt=1/(b.real *b.real +b.image *b.image );
	temp.real =(a.real *b.real +a.image *b.image )*tt;
	temp.image =(b.real *a.image -a.real *b.image )*tt;
	return temp;
}



