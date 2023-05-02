#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;


TwoDayPackage::TwoDayPackage(const string &a, const string &b, const string &c, 
	const string &d, int e, const string &f, const string &g, const string &h, 
    const string &i, int j, double k, double l, double m):Package(a, b, c, d, e, f, g, h, i, j, k, l)
{
    setFlatFee(m);
}

void TwoDayPackage::setFlatFee(double a)
{
    if(a>0)
        flatFee=a;
    else  
		cout<<"Flat fee needs to be positive."<<endl;
}

double TwoDayPackage::getFlatFee() const
{
    return flatFee;
}

double TwoDayPackage::calculateCost() const
{
    return getFlatFee()+(getWeight()*getCostPerOunce());
}
