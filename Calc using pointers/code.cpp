#include <iostream>

using namespace std;
float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
float awn;
int main ()
{
int choice;
float num1;
float num2;
	cout << "addition = 1 subtraction = 2 multiplication = 3 division = 4 ";
	cin >> choice;
	cout << "\n" <<"pick first number ";
	cin >> num1;
	cout << "\n" <<"pick second number ";
	cin >> num2;

		switch(choice){
		case 1:
			add(num1, num2);
			break;

		case 2:
			sub(num1, num2);
			break;

		case 3:
			mul(num1, num2);
			break;

		case 4:
			div(num1, num2);
			break;

		default :
			cout <<"error";
			break;
	}
cout << awn;
	return 0;
}
 float add(float a,float b){
	awn = a+b;
	return awn;
}
 float sub(float a,float b){
	 awn = a-b;
	return awn;
}
 float mul(float a,float b){
	 awn = a*b;
	return awn;
}
 float div(float a,float b){
	 awn = a/b;
	return awn;
}
