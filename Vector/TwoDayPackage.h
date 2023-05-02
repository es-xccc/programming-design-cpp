#ifndef TwoDayPackage_H
#define TwoDayPackage_H
#include <string>
#include "Package.h"
using namespace std;


class TwoDayPackage: public Package{
public:
TwoDayPackage(const string &, const string &, const string &, 
    const string &, int, const string &, const string &, const string &, 
    const string &, int, double, double, double);
    
    void setFlatFee(double);
    double getFlatFee() const;
    double calculateCost() const;
private:
    double flatFee;
};

#endif
