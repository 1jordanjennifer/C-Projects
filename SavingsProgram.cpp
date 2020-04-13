//Savings Account Program
//Created by Jennifer Jordan on April 8 2020
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
double getBalance(int amount, double rate, int y);

int main()
{
	//Initialize the three variables for output
	int deposit = 0;
	double interestRate = 0.0;
	double acctBalance = 0.0;
	
	//Prompt the user to input the required information and in the correct form
	cout << "Deposit: ";
	cin >> deposit;
	cout << "Rate(in decimal form): ";
	cin >> interestRate;
	
	//display the output with 2 decimal places
	cout << fixed << setprecision(2);
	
	
	//create a counter named year and set it to 1.
	//the for clause checks if the value in year is less than 4 and since it is, the loop is processed.

	//the statement calls the getBalance function while passing it a copy of the values in the 
	//3 variables we initialized.

	for (int year = 1; year < 4; year += 1)
	{
		acctBalance = getBalance(deposit, interestRate, year);
		cout << "Year " << year << " : $" << acctBalance << endl;
	}//end for loop

	return 0;
}//end of main function

 //the computer leaves the main function to go process the getbalance function

//***function definitions***

//the first statement creates and initializes balance, then the next statement calculates the balance
double getBalance(int amount, double rate, int y)
{
	double balance = 0.0;
	balance = amount * pow((1 + rate), y);
	return balance;
}//end of get balance function
//balance is now returned to the main funtion in the acctBalance variable
//now that the getBalance function is complete it removes the the information in the amount,
//rate and y variables from memory
