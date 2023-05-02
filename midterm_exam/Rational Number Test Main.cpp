// Rational Number test program.
#include <iostream> 
#include "RationalNumber.h"
using namespace std;

int main()
{
   Rational c( 7, 3 ), d( 3, 9 ), x, y;

   c.printRational();
   cout << " + " ;
   d.printRational();
   cout << " = ";
   x = c + d; // test overloaded operators + and =
   x.printRational();

   c.setRationalNumber( 10, 1 ); // reset realPart and 
   d.setRationalNumber( 11, 5 ); // and imaginaryPart

   // test overloaded equality operator
   cout << ( ( c == d ) ? "  == " : "  != " );
   d.printRational();
   cout << " according to the overloaded == operator\n";

   // test overloaded inequality operator
   cout << ( ( c != d ) ? "  != " : "  == " );
   d.printRational();
   cout << " according to the overloaded != operator" << endl;
   
   cout << "\nInput a Rational Number:" << endl;
   cin >> y;
   cout << "\nOutput Rational number " << y;

   cout << "Testing increment and decrement overloaded operators" << ++x  << y--;

} // end main


