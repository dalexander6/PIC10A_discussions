#include <iostream>
#include <string>

using namespace std;


int max(int x, int second) {
	return x > second ? x : second;
}

int main() {

	/*
	int hours;
	cin >> hours;

	const int MINUTES_PER_HOUR = 60;
	const int DAYS_OF_THE_YEAR_ON_EARTH_NON_LEAP_YEAR = 365;
	int minutes = hours * MINUTES_PER_HOUR;

	int x = 10;
	//y % 2 == 1;
	//MINUTES_PER_HOUR = 10;
	x = x + 1;
	x += 1;
	x++;
	++x;
	x--;
	--x;

	x = x OPERATOR 4;
	x *= 2;
	*/
	
	//PROBLEM P2.3
	
	//first, ask user for two integers
	int first;
	int second;
	cout << "Please enter two integers: " << endl;
	cin >> first;
	cin >> second;

	//second part: compute their sum and print it
	int sum = first + second;
	cout << "Sum = " << sum << endl;

	//skip a few parts
	//
	//compute distance
	int distance = first - second;
	if (distance < 0) {
		distance *= -1;
	}
	//or:
	//int distance;
	//if (first - second > 0)
	//	distance = first - second;
	//else
	//	distance = second - first;
	//int distance = (first > second) ? first - second : second - first;
	cout << "Distance = " << distance << endl;

	//compute maximum
	//int maximum = first > second ? first : second;
	int maximum = max(first, second);
	cout << "Maximum = " << maximum << endl;
	//or:
	//int maximum = first;
	//if (maximum < second)
	//	maximum = second;
	//
	//compute maximum of  3, 2, 5, 8, -1
	/*
	int third = 10;
	int maximum = first;
	maximum = max(maximum, second);
	maximum = max(maximum, third);
	maximum = max(maximum, fourth);
	*/
	int third;
	cin >> third;
	cout << "Maximum of three = " << (((first > second) ? first : second) > third ? (first > second ? first : second) : third ) << endl;
	cout << max(max(first, second), third) << endl;

	string s = "hello, world!";
	int z = s.size();

	return 0;
}
