#include <iostream>
#include <vector>
#include <string> 
#include <iomanip> 
using namespace std;

int main() {
	/*
	string s;
	getline(cin, s);
	cout << s << endl;
	if (-1 == static_cast<int>(s.find(" ")))
		cout << "No spaces found" << endl;
	bool haveFoundSpaceOrDash = false;
	//when beginning loop, set i = 0
	for (unsigned int i = 0; i < s.size(); i++) {
		//at start of loop, checks if i < 10
		cout << s[i] << endl;
		if (s[i] == ' ' || s[i] == '-') 
			haveFoundSpaceOrDash = true;
		//at end of loop, runs i++
	}
	if (haveFoundSpaceOrDash) {
		cout << "Please enter ID with no spaces or dashes" << endl;
	}
	if (s.size() != 9) {
		cout << "Please enter an ID of length 9" << endl;
	}
	*/
	for (int i = 33; i < 128; i++) {
	//	cout << i << " " << static_cast<char>(i) << endl;
		cout << left << setw(3) << i << " " << static_cast<char>(i) << " ";
		i++;
		cout << setw(3) << i << " " << static_cast<char>(i) << " ";
		i++;
		cout << setw(3) << i << " " << static_cast<char>(i) << " ";
		i++;
		cout << setw(3) << i << " " << static_cast<char>(i) << " ";
		i++;
		cout << setw(3) << i << " " << static_cast<char>(i) << " ";
		cout << endl;
	}
	vector<double> v = {1/3, 1/3., 4/2*2, (2+4) % 2 , 2 == 1, 2 == 2};
	int x = 2;
	int y = x = 3;
	if (3 == x) {
		cout << "x = 3" << endl;
	}
	for (auto i : v) {
		cout << i << endl;
	}

	//cout << (-1 == s.find(" ")) << endl;
//	cout << static_cast<int>('a') << endl;
	return 0;
}
