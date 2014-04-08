/*
 * This file was written April 3rd in the PIC discussion
 * Author: Damon Alexander
 *
 */
#include <iostream>
#include <string>

using namespace std;

/*
 * This function takes an integer
 * and returns the square of that integer
 */
int square(int y) {
	return y*y;
}

int main() {
	int x = 7;
	x = x + 1;
	//x = x + 3e100;
	double pi = 3.14;
	double radius = 10;
	double z = 1; //this is the radius
	double y= pi*2*z;  //compute circumference
	//we are computing the total distance the ant has to walk to cross the orange he's walking on
	double circumference = 2*pi*radius;
	//THIS IS A COMMENT
	/*
	 this is also a comment
	 */
	double bigNumber = 3e100;
	bigNumber = bigNumber + 1;
	cout << x << endl;
	cout << pi << endl;
	cout << bigNumber <<endl;
	cout << "square(x) = " << square(x) << endl;

	string hello = "Hello\" hi \" World!\n";
	cout << hello;
	//cout prints to the console
	cout << "Hello World, again!" << endl;

	return 0;
}
