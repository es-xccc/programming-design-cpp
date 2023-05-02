#include <iostream>
#include <string>
#include "Package.h"

Package::Package(const string &a, const string &b, const string &c, 
	const string &d, int e, const string &f, const string &g, const string &h, 
    const string &i, int j, double k, double l)
{
	senderName=a;
	senderAddress=b;
	senderCity=c;
    senderState=d;
    senderZIP=e;
    recipientName=f;
    recipientAddress=g;
    recipientCity=h;
    recipientState=i;
    recipientZIP=j;

    setWeight(k);
    setCostPerOunce(l);
}

void Package::setSenderName(const string &a)
{
    senderName=a;
}

string Package::getSenderName() const
{
    return senderName;
}

void Package::setSenderAddress(const string &a)
{
    senderAddress=a;
}

string Package::getSenderAddress() const
{
    return senderAddress;
}

void Package::setSenderCity(const string &a)
{
    senderCity=a;
}

string Package::getSenderCity() const
{
    return senderCity;
}

void Package::setSenderState(const string &a)
{
    senderState=a;
}

string Package::getSenderState() const
{
    return senderState;
}

void Package::setSenderZIP(const int a)
{
    senderZIP=a;
}

int Package::getSenderZIP() const
{
    return senderZIP;
}

void Package::setRecipientName(const string &a)
{
    recipientName=a;
}

string Package::getRecipientName() const
{
    return recipientName;
}

void Package::setRecipientAddress(const string &a)
{
    recipientAddress=a;
}

string Package::getRecipientAddress() const
{
    return recipientAddress;
}

void Package::setRecipientCity(const string &a)
{
    recipientCity=a;
}

string Package::getRecipientCity() const
{
    return recipientCity;
}

void Package::setRecipientState(const string &a)
{
    recipientState=a;
}

string Package::getRecipientState() const
{
    return recipientState;
}

void Package::setRecipientZIP(const int a)
{
    recipientZIP=a;
}

int Package::getRecipientZIP() const
{
    return recipientZIP;
}

void Package::setWeight(double a)
{
    if(a>0)
    	weight=a;
    else
    	cout<<"Weight needs to be positive."<<endl;
}

double Package::getWeight() const
{
    return weight;
}

void Package::setCostPerOunce(const double a)
{
    if(a>0)
        costPerOunce=a;
    else  
		cout<<"Weight needs to be positive."<<endl;

}

double Package::getCostPerOunce() const
{
    return costPerOunce;
}

double Package::calculateCost() const
{
    return  getWeight()*getCostPerOunce();
}
