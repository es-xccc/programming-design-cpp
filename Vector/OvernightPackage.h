#ifndef OvernightPackage_H
#define OvernightPackage_H
#include <stdio.h>
#include <string>
#include "Package.h"
using namespace std;

class OvernightPackage: public Package{
public:
    OvernightPackage(const string &, const string &, const string &, 
    	const string &, int, const string &, const string &, const string &, 
    	const string &, int, double, double, double);
    	
    void setFeePerOunce(double);
    double getFeePerOunce() const;
    double calculateCost() const;
private:
    double feePerOunce;
};

#endif
