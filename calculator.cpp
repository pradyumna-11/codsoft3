#include<iostream>
using namespace std;

int main() {
	float fnum,snum,result;
	char op;
	cout<<"Enter first number : ";
	cin>>fnum;
	cout<<"Enter operator +,-,*,/ : ";
	cin>>op;
	cout<<"Enter second number : ";
	cin>>snum;
	switch(op) {
		case '+':
			cout<<fnum<<" "<<op<<" "<<snum<<" = "<<fnum+snum;
			break;
		case '-':
			cout<<fnum<<" "<<op<<" "<<snum<<" = "<<fnum-snum;
			break;
		case '*':
			cout<<fnum<<" "<<op<<" "<<snum<<" = "<<fnum*snum;
			break;
		case '/':
			try{
				if(snum==0) {
					throw(snum);
					
				}
				cout<<fnum<<" "<<op<<" "<<snum<<" = "<<fnum/snum;
			}
			catch(float t){
				cout<<"Division by zero is not possible please enter a valid number to perform division\n";
			}
			
			break;
		default:
			cout<<"Enter a valid operator"<<endl;
	}
	return 0;
}
