//Guessing Game - Number Guessing game
//Created by Jennifer Jordan on April 8 2020

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int randomNumber = 0;
	int numberGuess = 0;

	//generate a random number from 1 through 10
	srand(static_cast<int>(time(0)));
	randomNumber = 1 + rand() % (10 - 1 + 1);

	//get first guess from user
	cout << "Guess a number from 1 through 10: ";
	cin >> numberGuess;

	while (numberGuess != randomNumber)
	{
		cout << "Sorry, guess again my friend: ";
		cin >> numberGuess;
	}//end While

	cout << endl << "Yes, the number is " << randomNumber << "." << endl;
	return 0;
}//end main function