//Gross Pay with overtime program
//Created & Modified by Jennifer Jordan on April 9, 2020

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Intro16.h"
using namespace std;

//function prototype
int getOverTimePay(int OTpay);
int getDoubleTimePay(int DTpay);
void displayLine();

int main()
{
	char hold = ' ';
	int const Pay_Rate = 10;
	int OTRate = 15;
	int DTRate = 20;
	int hoursWorked = 0;
	int regularPay = 0;
	int overTimePay = 0;
	int doubleTimePay = 0;
	int overtimeHours = 0;
	int TotalPay = 0;

	displayLine();
	cout << "Please enter your total hours worked: ";
	cin >> hoursWorked;
	displayLine();

	
	//calculations
	if (hoursWorked >= 0 && hoursWorked <= 37)
	{
		regularPay = (hoursWorked * Pay_Rate);
		cout << "Your regular Pay is: $" << regularPay;
		cout << endl;
		displayLine();
	}
	else if (hoursWorked >= 38 && hoursWorked <= 50)
	{
		overTimePay = getOverTimePay(hoursWorked);
		cout << "Your overtime pay is: $" << overTimePay;
		cout << endl;
		displayLine();
	}

	else if (hoursWorked >= 51)
	{
		doubleTimePay = getDoubleTimePay(hoursWorked);
		cout << "Here is your double time pay, Ballin'!: $" << doubleTimePay;
		cout << endl;
		displayLine();
	}

	
	
}//end main function 


//****Overtime Function*****
int getOverTimePay(int hours)
{
	int OTpay = (37 * 10) + (hours - 37) * 15;
	return OTpay;
}
//****Double Time function******
int getDoubleTimePay(int hours)
{
	int DTpay = (37 * 10) + (13 * 15) + (hours - 50) * 20;
	return DTpay;
}
void displayLine()
{
	cout << "********************************************************" << endl;
}//end of display line function