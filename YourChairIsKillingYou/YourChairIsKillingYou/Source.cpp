//added "Header.h" to stdafx.h 
#include "stdafx.h"
#include "iostream"
#include "chrono"
#include "ctime"
#include "windows.h"
#include "time.h"
#include "stdlib.h"
#include "stdio.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

//creating the pointers within the reference project to save time and space, used the other functions just to fluff the program
int references()
{
	//creating a random amount for deposits
	srand(static_cast<unsigned int>(0));
	//Creating Variables
	int fakeTerrorists = 100;
	int fakeCoffeeShop = 10;
	//the random amounts for deposits
	int fakeBankDeposit = rand() % 1000 + 1;
	int menu = 0;

	cout << "Welcome to CoffeeHackerMan:\n";
	cout << "The way to use Terrorism to save our delicious coffee!\n\n";
	cout << "Starting up the main menu:\n";
	cout << "================================================================================\n\n";

	//Creating the actual menu with a do while loop
	do
	{
		cout << "Press 1 to view current account balances.\n";
		cout << "Press 2 to initiate account transfer.\n";
		cout << "Press 3 to update Terrorist balance.\n";
		cout << "Press 4 to exit program (for now).\n";
		cin >> menu;
		cout << "================================================================================\n\n";

		if (menu == 1)
		{
			//naming variables, the references will take over when it actually runs
			legit(fakeTerrorists, fakeCoffeeShop);
		}
		else if (menu == 2)
		{
			//same idea from legit function
			hacked(fakeTerrorists, fakeCoffeeShop);
		}
		else if (menu == 3)
		{
			//using & points to the address in which the variables are stored
			fakeBankDeposit = rand() % 1000 + 1;
			deposit(&fakeTerrorists, &fakeBankDeposit);
		}
		else if (menu == 4)
		{
			cout << "Your country thanks you!\n";
			cout << "Come back soon!\n";
			return 0;
		}
		else
		{
			cout << "Please provide a valid input.\n";
			//	cin >> menu;
			//  This would create a lapse where cin did nothing, since it was running twice
		}

	} while (menu != 4);

	return 0;
}

//The "Normal" Transaction function
//This function is to show the actual account information of both accounts in question.
int legit(int& terror, int& coffee)
{
	cout << "The Terrorists currently have: $" << terror << " in their account.\n";
	cout << "The Coffee Shop currently has: $" << coffee << " in it's account.\n";
	cout << "================================================================================\n\n";

	return terror, coffee;
	//return 0;
}

//The "Swapped" Transaction function
//This function initiates a transfer of funds from the terrorist group to the coffee shop
//The intent is to have the program empty the terrorist account into the coffee shop account
//instead of just "swapping" the amounts.
int hacked(int& terror, int& coffee)
{
	int temp = terror;
	terror = coffee;
	coffee = temp;

	cout << "Account successfully hacked!\n";
	cout << "The Terrorists now have $" << terror << " in their account.\n";
	cout << "The Coffee Shop now has: $" << coffee << " in it's account.\n";
	cout << "================================================================================\n\n";

	return terror, coffee;
}

//The Deposit function
//This function initiates a deposit from the terrorists into their account
//Made the number random, as though the terrorists are making regular deposits
//of varying amounts and the bank is 'holding' those deposits until the program
//authorizes the transaction.
int deposit(int *fakeTerrorists, int *fakeBankDeposit)
{
	//using * manipulates the data at the address of the variables
	//making sure that when the function is called it points directly to the variables
	//and making sure that the variables are manipulated within the function, the new variables reflect on the return
	int temp = *fakeTerrorists + *fakeBankDeposit;
	*fakeTerrorists = temp;

	cout << "The Terrorists have added $" << fakeBankDeposit << "To their bank account!\n";
	cout << "The total amount in the Terrorist account is $" << fakeTerrorists << ".\n";
	cout << "================================================================================\n\n";

	return *fakeTerrorists, *fakeBankDeposit;
	//return 0;
}

int skynet()
{
	srand(time(0));

	int number = rand() % 64 + 1;
	int high = 64;
	int low = 1;
	int location = number;
	int search;
	int count = 0;
	bool found = false;

	cout << "==============================================================\n";
	cout << "Welcome to Skynet HK Aerial.\n";
	cout << "Prepare Search for Target.\n\n";
	cout << "==============================================================\n";

	while (found == false)
	{
		int search = ((high - low) / 2) + low;
		count = count + 1;
		if (search > location)
		{
			high = search - 1;
			//cout << "==============================================================\n";
			//cout << "Target not found at " << search << ", initiating sonar ping\n";
			//cout << "Moving to new location\n\n";
		}
		else if (search < location)
		{
			low = search + 1;
			//cout << "==============================================================\n";
			//cout << "Target not found at " << search << ", initiating sonar ping\n";
			//cout << "Moving to new location\n\n";
		}
		else if (search == location)
		{
			cout << "==============================================================\n";
			cout << "Target Located at " << location << ".  " << count << " units were searched.\n\n";
			found = true;
		}
		else
		{
			//cout << "Critical error!\n";
			//cout << "Recover drone for diagnostics.\n\n";
			//cout << "==============================================================\n";
			found = true;
		}
	}
	system("pause");
	return 0;
}

int keywords()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
	{ "superfluous", "Redundant, extra, more than necessary, way too much." },
	{ "enigmatic", "guarded, secretive, mysterious." },
	{ "reconciliation", "to make amends, to become friendly again, to bring together." },
	{ "determination", "persistent, motivated, not gonna give up." },
	{ "discombobulated", "to be confused, to not understand, not knowing whats going on." },
	{ "aerodynamic", " mostly regarding airplanes, interacting with wind" },
	{ "cyberphobia", "to fear computers, ahmish people are this, among other things." },
	{ "antidisestablishmentarianism", "good luck" },
	{ "incomprehensible", "not being able to be understood, illogical, possibly ironic" },
	{ "unimaginatively", "without imagination, not inspired, practical" }
	};

	srand(static_cast<unsigned int>(time(0)));
	char playAgain;

	cout << "Welcome to Keywords!\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter -hint- for a hint.\n";
	cout << "Enter -quit to exit the program!\n";
	cout << "=========================================\n\n";

	do
	{
		int totalAttempts = 0;

		for (int answers = 0; answers < 3; answers++)
		{
			int choice = (rand() % NUM_WORDS);
			string theWord = WORDS[choice][WORD];
			string theHint = WORDS[choice][HINT];
			string jumble = theWord;
			int length = jumble.size();

			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumble[index1];
				jumble[index1] = jumble[index2];
				jumble[index2] = temp;
			}

			cout << "The jumble is: " << jumble; string guess;
			cout << "\nYour Guess: ";
			cin >> guess;
			int attempts = 1;
			totalAttempts++;

			while ((guess != theWord) && (guess != "quit"))
			{
				if (guess == "hint")
				{
					cout << theHint << "\n";
				}
				else
				{
					cout << "I'm not sorry, but that's not it.\n";
					attempts++;
					totalAttempts++;
				}
				cout << "Your Guess: ";
				cin >> guess;
			}

			if (guess == theWord)
			{
				cout << "That's it!\n";
				cout << "You got it in: " << attempts << " attempts.\n\n";
			}
		}

		cout << "You completed this iteration with " << totalAttempts << " total guesses.  Congratulations.\n";

		cout << "Would you like to go another round?\n";
		cout << "Please input y or n to answer: ";
		cin >> playAgain;
		while ((playAgain != 'y') && (playAgain != 'Y') && (playAgain != 'n') && (playAgain != 'N'))
		{
			cout << "That is not an acceptable response, please input y or n.\n";
			cin >> playAgain;
		}
	} while ((playAgain == 'y') || (playAgain == 'Y'));

	cout << "Thanks for training!\n";
	system("pause");

	return 0;
}

int timer()
{	
	int time = 0;
	cout << "How long would you like to take?\n";
	cin >> time;
	for (int i = 0; i < time; i++)
	{
		cout << i;
		Sleep(999); //sleeping to create second intervals between each count of i
		system("cls");	//functionality that prints, deletes, and then prints the new value, making it "look" like an actual counter
	}
	//auto start = std::chrono::steady_clock::now(); //get start time
	//auto end = std::chrono::steady_clock::now(); //get end time
	//double elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds>(end - start).count()); //finding the difference
	//cout << "Elapsed Time(s): " << elapsed_time_ns / 1e9 << "\n"; //printing elapsed time
	//removed the start, end, difference, and print out for the chrono, since it doesn't serve the purpose Im intending for the timer.
	return 0;
}