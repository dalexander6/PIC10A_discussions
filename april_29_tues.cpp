#include<iostream>
#include <iomanip>
#include<cstdlib>
#include<ctime>
#include<stdexcept>
using namespace std;

//int height = 7; //This is a global variable, avoid if at all possible

void printRectangle(int height, int width, char symbol) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << symbol;
		}
		cout << endl;
	}
}

void printHollowRectangle(int height, int width, char symbol) {
	//DON'T WORRY ABOUT THIS
	if (height < 2 || width < 2) {
		throw invalid_argument("Height or width < 2");
	}
	for (int j = 0; j < width; j++) {
		cout << symbol;
	}
	cout << endl;
	for (int i = 1; i < height-1; i++) {

		cout << symbol;
		for (int j = 1; j < width-1; j++) {
			cout << ' ';
		}
		cout << symbol;
		cout << endl;
	}
	for (int j = 0; j < width; j++) {
		cout << symbol;
	}
	cout << endl;
}
void printLinedRectangle(int height, int width) {
	char symbol = '-';
	for (int j = 0; j < width; j++) {
		cout << symbol;
	}
	cout << endl;
	symbol = '|';
	for (int i = 1; i < height-1; i++) {
		cout << symbol;
		if (!(rand() % 3)) {
			int MOOSTART = rand() % (width - 5) + 1;
			for (int j = 1; j < MOOSTART; j++) {
				cout << ' ';
			}
			cout << "MOO";
			for (int j = MOOSTART + 3; j < width-1; j++) {
				cout << ' ';
			}
		}
		else {
			for (int j = 1; j < width-1; j++) {
				cout << ' ';
			}
		}
		cout << symbol;
		cout << endl;
	}
	symbol = '-';
	for (int j = 0; j < width; j++) {
		cout << symbol;
	}
	cout << endl;
}


int main(){
	int seed = static_cast<int>(time(NULL));
	// sets the random number seed to that int
	srand(seed);
	printLinedRectangle(18, 15);
	return 0;
}


