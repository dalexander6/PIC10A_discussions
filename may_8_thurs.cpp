#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <cmath>

using namespace std;

namespace math {
	const double PI = atan(1./4);
}
class TwoDice {
private:
	int dice1;
	int dice2;

public:
	TwoDice();
	TwoDice(int d1, int d2);

	void roll();
	int get_total() const;
};

int main() {
	srand(static_cast<int>(time(NULL)));

	//x = rand() % 51 + 50; //all numbers from 50 to 100
	//x = (rand() % 26 + 25)*2;
	TwoDice dice;
	cout << dice.get_total() << endl;
	TwoDice dice2(5, 2);
	cout << dice2.get_total() << endl;

	for (int i = 0; i < 10; i++) {
		dice2.roll();
		cout << dice2.get_total() << endl;
	}
	return 0;
}

TwoDice::TwoDice() {
	dice1 = 1;
	dice2 = 1;
}

TwoDice::TwoDice(int d1, int d2) {
	dice1 = d1;
	dice2 = d2;
}

void TwoDice::roll() {
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
}

int TwoDice::get_total() const {
	return dice1 + dice2;
}

