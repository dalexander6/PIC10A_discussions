#include<iostream>
#include <iomanip>
#include<cstdlib>
#include<ctime>
#include<stdexcept>
#include <cmath>
#include <vector>

using namespace std;

enum DAY {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

class date {
private:
	DAY day;
	int day_of_the_month;

public:
	date(DAY day, int day_of_the_month) : day(day), day_of_the_month(day_of_the_month) {
	}

};

int main() {
	vector<date*> dates;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 31; j++) {
			dates.push_back(new date(static_cast<DAY>(i), j));

		}
	}

	for (int k = 0; k < dates.size(); k++) {
		delete dates[k];
	}

	/*
	vector<string> suits = {"HEARTS", "SPADES", "DIAMONDS", "CLUBS"};
	vector<string> ranks = {"ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING"};

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			cout << "deck.push_back(new Card(" + ranks[j] + ", " + suits[i] + "));" << endl;
		}
	}
	*/

	int* zPtr = new int(7);
	{
		int x = 2;
		int* yPtr = zPtr;
		//delete yPtr;
	}
	cout << *zPtr << endl;

	return 0;
}


