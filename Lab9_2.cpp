//Dealer Rate Program
//Created by Jennifer Jordan on April 8 2020

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype here
double getPayment(int, double, int);
void displayLine();

int main()
{
	int carPrice = 0;
	int rebate = 0;
	double creditRate = 0.0;
	double dealerRate = 0.0;
	int term = 0;
	double creditPayment = 0.0;
	double dealerPayment = 0.0;

	cout << "Car price (after any trade-in): ";
	cin >> carPrice;
	displayLine();
	cout << "Rebate: ";
	cin >> rebate;
	displayLine();
	cout << "Credit Union Rate: ";
	cin >> creditRate;
	displayLine();
	cout << "Dealer Rate: ";
	cin >> dealerRate;
	displayLine();
	cout << "Term in Years: ";
	cin >> term;
	displayLine();


	//Call the function to calculate the payments
	creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
	dealerPayment = getPayment(carPrice,  dealerRate / 12, term * 12);

	//display payments
	cout << fixed << setprecision(2) << endl;
	cout << "Credit Union Payment: $" << creditPayment << endl;
	displayLine();
	cout << "Dealer Payment: $" << dealerPayment << endl;
	displayLine();
	return 0;
}//end of main function

//*****function definitions******

double getPayment(int prin, double monthRate, int months)
{
	//calculates and returns a monthly payment
	double monthPay = 0.0;
	monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
	return monthPay;
}//end of getPayment function

void displayLine()
{
	cout << "********************************************************" << endl;
}//end of display line function