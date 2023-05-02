//E94106216ÁÂ´I²» 
#include<bits/stdc++.h>
using namespace std;
bool w=1;
void guess(int t);
int main(){
	int a;
	srand(time(0));
	while(w==1){
		a=1+rand()%1000;
		guess(a);
	}
}
void guess(int t){
	int i;
	char g;
	cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n";
	do{
		cin>>i;
		if(i<t){
			cout<<"Too low. Try again.\n";
		}
		else if(i>t){
			cout<<"Too high. Try again.\n";
		}
		else{
			cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)?\n";
			again:
			cin>>g;
			switch(g){
				case 'y':
					w=1;
					break;
				case 'n':
					w=0;
					break;
				default:
				cout<<"You can only input y or n.\n";
				goto again;
			}
		}
	}
	while(i!=t);
}
