#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <cmath>

using namespace std;

const int pi = 3.14;
void swap(int& a, int& b) {
	cout << "Received a = " << a << " and b = " << b << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "Now, a = " << a << " and b = " << b << endl;
}


class TimeInterval {
private: 
	int startTime;
	int endTime;
public:
	TimeInterval(int start, int end) { startTime = start; endTime = end; }
	int getStartTime() { return startTime; }
	int getEndTime() { return endTime; }
};

class Shift {
private:
	string name;
	TimeInterval ti;

public:
	Shift(string _name, int _startTime, int _endTime);
	int getStartTime();
	int getEndTime();
	string getName();
	void setName(string newName);

};

void annoyingTestProblem(int a, int& b) {
	a++;
	b++;
}

class foo {
private:
	int f1;
	string f2;
	double f3;
	Shift f4;
public:
	foo(int f1, string _f2, double _f3, Shift _f4) {
		this->f1 = f1;
		f2 = _f2;
		f3 = _f3;
		f4 = _f4;
	}
};

int main(){
	Shift myShift("Damon", 1300, 1350);
	cout << myShift.getName() << endl;
	cout << myShift.getStartTime() << endl;
	//myShift.startTime = 1000;
	//cout << myShift.startTime << endl;
	cout << "Pre-swapping" << endl;
	int x = 2;
	int y = 7;
	cout << "x = " << x << ", y = " << y << endl;
	swap(x, y);
	cout << "Post-swapping" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	annoyingTestProblem(x,y);
	cout << "x = " << x << ", y = " << y << endl;
	int a = 5;
	int b= 3;
	annoyingTestProblem(b, a);
	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}

Shift::Shift(string _name, int _startTime, int _endTime) : ti(0,0) {
	name = _name;
	ti = TimeInterval(_startTime, _endTime);
}
int Shift::getStartTime() {
	return ti.getStartTime();
}

int Shift::getEndTime() {
	return ti.getEndTime();
}

string Shift::getName() {
	return name;
}

void Shift::setName(string newName) {
	name = newName;
}
