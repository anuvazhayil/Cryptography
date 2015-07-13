#include<iostream>

using namespace std;

void gcd(int, int);
int main(){
	int numberOne, numberTwo, divident, divisor;
	char ch;
	do{
		cout<<"\nEnter the two numbers(Positive integers):";
		cin>>numberOne>>numberTwo;
		if(numberOne > numberTwo){
			divident = numberOne;
			divisor = numberTwo;
		}
		else{
			divident = numberTwo;
			divisor = numberOne;
		}
		gcd(divident, divisor);
		cout<<"Do you want to continue(Y/N)?\n";
		cin>>ch;
	}while(ch == 'y'|| ch == 'Y');
	return 0;
}

void gcd(int divident, int divisor){
	int temp;
	if(!divisor){
		cout<<"\nGCD of the two numbers:"<<divident<<"\n";
	}
	else{
		temp = divident;
		divident = divisor;
		divisor = temp%divisor;
		gcd(divident, divisor);
	}
}
