#include <iostream>
#include <string>

using namespace std;

int square(int y) {
	return y*y;
}

int main() {
	int x = 7;
	x = x + 1;
	//x = x + 3e100;
	double pi = 3.14;
	double bigNumber = 3e100;
	bigNumber = bigNumber + 1;
	cout << x << endl;
	cout << pi << endl;
	cout << bigNumber <<endl;
	cout << "square(x) = " << square(x) << endl;

	string hello = "Hello\" hi \" World!\n";
	cout << hello;
	cout << "Hello World, again!" << endl;

	return 0;
}
