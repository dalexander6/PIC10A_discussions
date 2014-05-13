#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <cmath>

using namespace std;

class Car {
private:
	double mpg;
	double gas;

public:
	Car(double mpg, double gas = 0) : mpg(mpg), gas(gas) {
	}

	double get_gas() const { return gas; }

	void add_gas(double newGas) { gas += newGas; }

	void drive(double miles) { gas -= miles/mpg; }
};


int main() {
	Car myCar(20, 5);
	cout << "gas: " << myCar.get_gas() << endl;
	myCar.add_gas(10);
	cout << "gas: " << myCar.get_gas() << endl;
	myCar.drive(100);
	cout << "gas: " << myCar.get_gas() << endl;
	myCar.drive(1000);
	cout << "gas: " << myCar.get_gas() << endl;

	return 0;
}

