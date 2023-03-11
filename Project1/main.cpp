using namespace std;

#include <iostream>
#include <cmath>
#include <time.h> 
#include <string>


bool gameType2();


int main()
{
	int secret = (rand() % 3) + 1;
	string comChoice;
	string player1;
	string player2;
	int choice;

	srand(time(NULL));



	cout << "Welcome to Suveer's fun land! :)" << endl << endl;



	cout << "1. PVP" << endl;
	cout << "2. AI" << endl;

	cout << "Press any key to contine: ";

	cin >> choice;

	if (choice == 2)
	{
		gameType2();
	}
	else if (choice == 1)
	{
		gameType1();
	}
	else
	{
		cout << "That's not an option bro" << endl;
	}

}




	return 0;


}


bool gameType2()
{

	if (secret == 3)
	{
		comChoice = "rock";
	}

	else if (secret == 2)
	{
		comChoice = "paper";
	}

	else if (secret == 1)
	{
		comChoice = "scissor";
	}


	cout << "Pick your choice: ";
	cin >> player1;


	if (comChoice == player1)
	{

		cout << "draw!";

	}

	if ((comChoice == "rock" && player1 == "paper") || (comChoice == "paper" && player1 == "scissors" ) || (comChoice == "scissors" && player1 == "rock" ))
	{

		cout << "player 1 wins!";

	}

	if ((player1 == "rock" && comChoice == "paper") || (player1 == "paper" && comChoice == "scissors") || (player1 == "scissors" && comChoice == "rock"))
	{

		cout << "comp wins!";

	}
	



	return true;
}
