#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

/*
	string x;

	while (cin >> x) {
		cout << "You entered: " << x << endl;
		if (x == "help") {
			break;
		}
	}
	*/

/*
	vector<string> s = {"Hobbit", "Sam", "hobbit", "hobbits", "hobbi\nts", "hobbi\tts"};

	sort(s.begin(), s.end());
	for (auto st : s) {
		cout << st << endl;
	}
	*/

	int x = 5;
	for (int i = 0; i < 20; i++) {
		cout << x << " ";
		x += 5;
	}

	int y = 0;
	while (y != 100) {
		y += 5;
		cout << y << " ";
	}



	return 0;
}
