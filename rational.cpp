#include <math.h>
#include <iostream>
#include "rational.h"
using namespace std;
rational::rational(int x,int y)
{
    numerator= x;
	denominator= y;
	optimization();
}
rational::~rational(){}
void rational::optimization()
{
	int gcd;
	if(numerator==0)	
	{
		denominator= 1;
		return;
	}
	gcd= (abs(numerator)>abs(denominator))?abs(numerator):abs(denominator);
	if(gcd==0)
		return;		
	int i;		
	for(i= gcd;i>1;i--)		
		if((numerator%i==0)&& (denominator%i==0))
		{
			break;
		}
			
	numerator/=i;		
	denominator/=i;
	if(numerator<0 && denominator<0)
	{
		numerator= -numerator;
		denominator= -denominator;
	}
	else if(numerator<0 || denominator<0)
	{
		numerator= -abs(numerator);
		denominator=abs(denominator);
	}
}
void rational::print()
{
	cout<<"("<<numerator;
	if(numerator!=0 && denominator!=1)
		cout<<"/"<<denominator<<")";
	else
		cout<<")";
}
rational rational::operator + (rational& other)
{
	rational temp;
	temp.denominator =this->denominator *other.denominator ;
	temp.numerator = this->numerator *other.denominator +this->denominator *other.numerator ;
	temp.optimization ();
	return  temp;
}
rational rational::operator - (rational& other)
{
	rational temp;
	temp.denominator =this->denominator *other.denominator ;
	temp.numerator = this->numerator *other.denominator -this->denominator *other.numerator ;
	temp.optimization ();
	return  temp;
}
rational rational::operator * (rational& other)
{
	rational temp;
	temp.denominator =this->denominator *other.denominator ;
	temp.numerator = this->numerator *other.numerator ;
	temp.optimization ();
	return  temp;
}
rational rational::operator / (rational& other)
{
	rational temp;
	temp.denominator =this->denominator *other.numerator  ;
	temp.numerator = this->numerator *other.denominator ;
	temp.optimization ();
	return temp;
}
double rational::real(rational x)
{
	return(double(x.numerator ))/(double(x.denominator ));
}	
