#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
using namespace std;

class Rational // (a, d: 20%, others 10 % each)
{
	friend ostream &operator<<(ostream &, const Rational &);
	friend istream &operator>>(istream &, Rational &);
	public:
		Rational &operator+(const Rational &);
		Rational &operator-(const Rational &);
		bool operator==(const Rational &);
		bool operator!=(const Rational &);
		Rational &operator++();
		Rational operator++(int);
		Rational &operator--();
		Rational operator--(int);	
		Rational(int , int); // default constructor
		Rational(const Rational &);
		Rational();
		~Rational();
		Rational addition( const Rational & ); // function addition
		Rational subtraction( const Rational & ); // function subtraction
		void printRational (); // print rational format
		void setRationalNumber(int, int); // set rational number
	private:
		int numerator; // integer numerator
		int denominator; // integer denominator
}; // end class Rational
#endif 
