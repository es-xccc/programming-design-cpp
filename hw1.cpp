#include<iostream>
using namespace std;
//E94106216謝富祥 
int main()
{
	double w,h;
	cout<<"請輸入你的體重(KG)"<<endl;
	cin>>w;
	cout<<"請輸入你的身高(M)"<<endl;
	cin>>h;
	cout<<"Your BMI is : "<<w/h/h<<endl<<endl;
	
	cout<<"BMI VALUES"<<endl;
	cout<<"Underweight: less than 18.5"<<endl;
	cout<<"Normal:      between 18.5 and 24.9"<<endl;
	cout<<"Overweight:  between 25 and 29.9"<<endl;
	cout<<"Obese:       30 or greater"<<endl;
}
