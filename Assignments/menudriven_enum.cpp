// Q1: Menu driven code
// Write a 4 function calculator by using menu driven code
// by taking  choice from user for calculation
// (Use Enum , while loop , switch )

#include<iostream>
using namespace std;

enum CalculatorEnum
{
	EXIT=0, SUMMATION, SUBTRACTION, MULTIPLICTION,DIVISION
};


int  summation(int num1, int num2)
{
	return num1 + num2;
}
int  subtraction(int num1, int num2)
{
	return num1 - num2;
}
int  multiplication(int num1, int num2)
{
	return num1 * num2;
}
int  division(int num1, int num2)
{
	return num1 / num2;
}

void accept_record(int& number)
{
	cout << "Enter number	:	";
	cin >> number;
}
void print_record(const int& result)
{
	cout << "Result	:	" << result << endl;
}
int menu_list(void)
{
	int choice;
	cout << "0.Exit" << endl;
	cout << "1.summation" << endl;
	cout << "2.subtraction" << endl;
	cout << "3.multiplication" << endl;
	cout << "4.division" << endl;
	cout << "Enter choice	:	";
	cin >> choice;
	return choice;
}
int main(void)
{	
	int choice;
	while ((choice = ::menu_list()) != 0 )
	{
		int num1;
		accept_record(num1);

		int num2;
		accept_record(num2);

		int result = 0;
		switch (choice)
		{
		case SUMMATION:
			result = summation(num1, num2);
			break;
		case SUBTRACTION:
			result = subtraction(num1, num2);
			break;
		case MULTIPLICTION:
			result = multiplication(num1, num2);
			break;
		case DIVISION:
			result = division(num1, num2);
			break;
		}
		print_record(result);
	}
	return 0;
}



