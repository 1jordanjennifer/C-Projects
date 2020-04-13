//Lab 10-2 displays total owed for windows BOGO program
//Created & revised by Jennifer Jordan

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void displayOptions();
void getRegular(int windows, double price, double &total);
void getBoGo(int windows, double price, double &total);
void displayLine();

int main()
{
	int option = 0;
	int numOrdered = 0;
	double winPrice = 0.0;
	double totalOwed = 0.0;

	cout << fixed << setprecision(2);
	displayLine();
	displayLine();
	displayOptions();
	cout << "Pricing Option? ";
	cin >> option;
	displayLine();

	if (option == 1 || option == 2)
	{
		cout << "Number of windows: ";
		cin >> numOrdered;
		displayLine();
		cout << "Price per window: ";
		cin >> winPrice;
		displayLine();

		if (option == 1)
			getRegular(numOrdered, winPrice, totalOwed);
		else
			getBoGo(numOrdered, winPrice, totalOwed);
		//end if

		cout << "Total owed -----> $" << totalOwed << endl << endl;
		displayLine();
		}
	else
		cout << "Invalid option" << endl;
		displayLine();
	//end if

	return 0;
}//end of main function

//****function definitions****
void displayOptions()
{
	cout << "Pricing options: " << endl;
	displayLine();
	cout << "1 Regular pricing" << endl;
	displayLine();
	cout << "2 BOGO pricing" << endl;
	displayLine();
}//end displayOptions

void getRegular(int windows, double price, double &total)
{
	total = windows * price;
}//end getRegular function

void getBoGo(int windows, double price, double &total)
{
	total = (windows / 2 + windows % 2) * price;
}//end getBogo function

void displayLine()
{
	cout << "********************************************************" << endl;
}//end of display line function
