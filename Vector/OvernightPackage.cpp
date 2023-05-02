#include <iostream>
#include <string>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string &a, const string &b, const string &c, 
	const string &d, int e, const string &f, const string &g, const string &h, 
    const string &i, int j, double k, double l, double m):Package(a, b, c, d, e, f, g, h, i, j, k, l)
{
    setFeePerOunce(m);
}

void OvernightPackage::setFeePerOunce(double a)
{
    if(a>0)
        feePerOunce=a;
    else  
		cout<<"Fee per ounce needs to be positive."<<endl;
}

double OvernightPackage::getFeePerOunce() const
{
    return feePerOunce;
}

double OvernightPackage::calculateCost() const
{
    return (getWeight()*(getCostPerOunce()+getFeePerOunce()));
}
