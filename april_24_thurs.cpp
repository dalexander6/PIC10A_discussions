#include<iostream>
#include <iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	/*
	int MAX_ITERATIONS = 10;
	int x = -1;
	int i = 0;
	while (x <= 0) {
		cout << "Iteration # " << i << endl;
		while (!( cin >> x)) {
			cin.clear();
			string invalidInput;
			cin >> invalidInput;
			cout << "Captured invalid input: " << invalidInput << endl;
			cout << "x = " << x << endl;
		}
		++i;
		if (x == -1) {
			break;
		}
	}
	*/
	// stores the current time of the computer as an int
	int seed = static_cast<int>(time(NULL));
	// sets the random number seed to that int
	srand(seed);

	int numIterations = 1e2;
	int numHits = 0;
	double probabilityOfHitting = 0;
	for (int numDarts = 1; numDarts <= numIterations; ++numDarts) {
		double randXUnscaled = rand() / (1.0*RAND_MAX);
		double x = randXUnscaled * 2 - 1;
		double randYUnscaled = rand() / (1.0*RAND_MAX);
		double y = randYUnscaled * 2 - 1;
		if (x*x + y*y <= 1) {
			++numHits;
		}
		probabilityOfHitting = numHits / (1.*numDarts);
	}
	cout << "Probability of hitting = " << probabilityOfHitting << endl;
	cout << "Estimate of pi: " << probabilityOfHitting*4 << endl;

	return 0;
}


