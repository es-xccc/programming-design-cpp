#include<iostream>
//E94106216ÁÂ´I²» 
using namespace std;
int main()
{
	double a=0,b=0,c=0;
	for(a=1;a<=500;a++)
	{
		for(b=a;b<=500;b++)
		{
			for(c=b;c<=500;c++)
			{
				if(a*a+b*b==c*c)
				cout<<a<<" "<<b<<" "<<c<<endl;
			}
		}
	}
}
