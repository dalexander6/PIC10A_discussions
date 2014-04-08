#include <iostream>
#include <string>

/*
  this is a multiline comment
 */
using namespace std;

int main() {
	string s = "hello world.";
	string t = "stuff";
	string u = s + t;
	unsigned int z = 0;
	z--;
	cout << z << endl;
	//cin >> s;
	//cin >> t;
	//cout << &s << endl;
	//s[2] = '!';
	//s[s.size()-1] = '!';
	cout << s << endl;
	cout << u << endl;
	//cout << t << endl;
	/*
	 * 120 cents 
	 * 120 / 25 = 4 (rounding down)
	 * what is our remainder?
	 * 120 - 4*25
	 * or: 120 % 25 (computer version)
	 * 120 mod 25 = 20 (math version)
	 * <= 
	//sometimes I believe compiler ignores all my comments
	double PI = 3.14159;
	double radius = 10;
	double area = PI * radius*radius;
	 */

	/*
	double p = 3.14; //p is PI
	double a = 10; //DONT DO IT THIS WAY
	double a2 = p*a*a; 
	*/
	//this prints hello world
	//int x = 120 / 25. + .5;
	double x = 120 / 1.*25;
	double y;
	//cin >> y;
	//cout << y << endl;
	//cout << "Hello World!" << endl;

	return 0; //returns 0
}
