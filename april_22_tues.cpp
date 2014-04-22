/*
examplemenu.cpp
written by Keith Ouellette
version: 4/26/2007

This program demonstrates how to make an example menu.
*/

#include<iostream>
#include <iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	/*
  // stores the current time of the computer as an int
  int seed = static_cast<int>(time(NULL));
  // sets the random number seed to that int
  srand(seed);
  int i = 0;  // a counter variable
  while(i < 10) {
	  int randNum = rand();
	 cout << "Random Number #" << (i+1) << ": " << randNum << endl;
	 int smallerRandNum = (randNum % 10) + 1;
	 cout << "Random Number between 0 and 9: " << smallerRandNum << endl;

	 // increment the counter
     i++;
  }
  */
	/*
	int x = 0;
	while (x != 7) {
		cout << "Enter 7: ";
		cin >> x
		cout << endl;
	}

	//stuff happens that shouldn't affect x but maybe you don't trust it: then use if, maybe.
	if (x==7) {
		cout << "x is seven!";
	}

	int y;
	cin >> y;
	if (y == 2) {
		cout << "Extended ascii ";
	}
	else {
		cout << "Normal ascii ";
	}
	cout << setw(10) << y << endl;

	*/

	const char QUIT = 'q';
	double num1;
	double num2;
	char option = ' ';
	bool haveAdded = false;
	int additionOutput = 0;

//	for (int i = 0; i < size; i++) <- usual for loop
	for (; option != QUIT; ) {
	    cout << "\nExample Menu 1.0\n\n";
	  
		// print out the menu
		cout << "Select from the following options: " << endl << endl;
		cout << "(a) Add Two numbers" << endl;
		cout << "(b) Multiply Two Numbers" << endl;
		cout << "(q) Quit" << endl << endl;
		 //"5\n"
 
		cout << "Enter the letter of your choice: ";
		// get the player's menu option
		cin >> option;
		cout << endl;

		if (option == 'a') {
			if (additionOutput == 0) {
			   cout << "Enter two numbers followed by ENTER: ";
			   cin >> num1 >> num2;
			   cout << endl;
			   cout << "The sum of " << num1 << " and " <<  num2 << " is " << (num1+num2) << endl << endl;
			   additionOutput = num1 + num2;
		   }
		   else {
			   cout << "No more addition for you!" << endl;
		   }
		}
		else if (option == 'b') {
		   cout << "Enter two numbers followed by ENTER: ";
		   cin >> num1 >> num2;
		   cout << endl;
		   cout << "The product of " << num1 << " and " <<  num2 << " is " << (num1*num2) << endl << endl;
		}
		else if (option == 'q' || option == 'Q') {
		   // do nothing as the condition (option != QUIT) will now be false
		   option = QUIT;
		}
		else {
		  cout << "Invalid choice. Try again." << endl << endl;
		}
   }

   cout << "Thanks for using the sample menu!" << endl << endl;

   return 0;
}


