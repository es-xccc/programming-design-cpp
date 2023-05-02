#include<bits/stdc++.h>
using namespace std;
class vehicles {
public:
    vehicles(void){}  //constructor
    virtual void sound(){
		cout<<"making a sound"<<endl;
	} 
};

class Trains: public vehicles{
public:
    void sound(){
    	cout<<"Bun Bun"<<endl;
	}
};

class Bycicle: public vehicles{
public:
    void sound(){
    	cout<<"Lin Lin"<<endl;
	}
};

class Molcar: public vehicles{
public:
    void sound(){
        cout<<"Gi Gi"<<endl;
    }
};

int main(){
	vector<vehicles*> ptr; 
	Trains t1;
	Bycicle b1;
	Molcar m1;
	
	ptr.push_back(&t1);  
    ptr.push_back(&b1);  
    ptr.push_back(&m1);  
	
	vector<vehicles*>::const_iterator i;
	for(i=ptr.begin();i!=ptr.end();i++)
	{
	   (*i)->sound();
	}
	
	return 0;
}
