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
#include "Header.h" //including the header file here, also added to stdafx.h file

using namespace std;

int main()
{
	int menu = 0;

	cout << "Welcome to YOUR CHAIR IS KILLING YOU!\n";
	cout << "This program introduces functionality in which you are able to\n";
	cout << "lock yourself out of your program for a determined amount of time\n";
	cout << "in order to justify standing and stretching, etc...\n";
	cout << "==================================================================================\n\n";
	cout << "Here is the main menu:\n";

	//Create Some Functionality within the program (aside from just the timer)
	//using the do loop while menu does not equal 4
	do
	{
		
		cout << "Press 1 to Execute Coffee Hacker.\n"; //calls previous project CoffeeHackerMan
		cout << "Press 2 to Execute Skynet HK Aerial.\n"; //calls previous project Skynet HK Aerial
		cout << "Press 3 to Execute Keywords Crypto.\n"; // calls previous project Keywords Crypto
		cout << "Press 4 to Set Break Timer.\n"; //adds timer functionality 
		cout << "Press 5 to Exit the program.\n"; // allows for exiting the program at will
		cin >> menu;
		cout << "==================================================================================\n\n";

		if (menu == 1)
		{
			references();
		}
		else if (menu == 2)
		{
			skynet();
		}
		else if (menu == 3)
		{
			keywords();
		}
		else if (menu == 4)
		{
			timer();
		}
		else if (menu == 5)
		{
			cout << "Come back soon!";
			exit(0);
		}
		else
		{
			cout << "Please provide a valid input.\n";
		}
	} while (menu != 5); //allowing for the loop to end once menu is 5

	system("pause");
    return 0;
}
