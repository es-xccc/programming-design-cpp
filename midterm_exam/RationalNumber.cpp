#include <iostream> 
#include "RationalNumber.h"
using namespace std;

Rational::Rational(int a=1, int b=1): numerator(a), denominator(b){
	if(denominator==0) numerator=denominator=1;
	cout<<"Rational number "<<numerator<<'/'<<denominator<<" is constructed."<<endl;
}

Rational::Rational(): numerator(1), denominator(1){
	
}

Rational::~Rational(){
	cout<<"Rational number "<<numerator<<'/'<<denominator<<" is destroyed."<<endl;
}

Rational::Rational(const Rational &copied): numerator(copied.numerator), denominator(copied.denominator){
	
}

Rational Rational::addition(const Rational &right){
	int newNumerator, newDenominator;
	newNumerator = numerator*right.denominator + denominator*right.numerator;
	newDenominator = denominator*right.denominator;
	numerator = newNumerator;
	denominator = newDenominator;
	return *this;
}

Rational Rational::subtraction(const Rational &right){
	int newNumerator, newDenominator;
	newNumerator = numerator*right.denominator - denominator*right.numerator;
	newDenominator = denominator*right.denominator;
	numerator = newNumerator;
	denominator = newDenominator;
	return *this;
}

void Rational::printRational(){
	cout<<numerator<<'/'<<denominator<<endl;
}

void Rational::setRationalNumber(int a, int b){
	numerator=a;
	denominator=b;
	if(denominator==0) numerator=denominator=1;
}

Rational &Rational::operator+(const Rational &right){
	numerator = numerator*right.denominator + denominator*right.numerator;
	denominator = denominator*right.denominator;
	return *this;
}

Rational &Rational::operator-(const Rational &right){
	numerator = numerator*right.denominator - denominator*right.numerator;
	denominator = denominator*right.denominator;
	return *this;
}

ostream &operator<<(ostream &output, const Rational &number){
	output<<number.numerator<<'/'<<number.denominator;
	return output;
}

istream &operator>>(istream &input, Rational &number){
	input>>number.numerator>>number.denominator;
	if(number.denominator==0) number.numerator=number.denominator=1;
	return input;
}

bool Rational::operator==(const Rational &right){
	if(numerator/denominator == right.numerator/right.denominator) return true;
	else return false;
}

bool Rational::operator!=(const Rational &right){
	return !(*this == right);
}

Rational &Rational::operator++(){
    numerator = numerator+denominator;
    return *this;
}

Rational Rational::operator++(int){
    Rational old = *this;
    numerator = numerator+denominator;
    return old;
}

Rational &Rational::operator--(){
    numerator = numerator-denominator;
    return *this;
}

Rational Rational::operator--(int){
    Rational old = *this;
    numerator = numerator-denominator;
    return old;
}
