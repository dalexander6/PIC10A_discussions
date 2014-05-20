/*
*/
#include <iostream>

using namespace std;

bool areEqual(const int x[], const int y[], int sizeX, int sizeY) {
	if (sizeX != sizeY) {
		return false;
	}
	else {
		for (int i = 0; i < sizeX; i++) {
			if (x[i] != y[i]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int w[3] = {2, 4, 5};
	int y[3] = {2, 4, 5};
	int z[3] = {1, 4, 5};
	cout << areEqual(w, y, 3, 3) << endl;
	cout << areEqual(w, z, 3, 3) << endl;
	cout << areEqual(z, y, 3, 3) << endl;

	
	bool x[6];
	for (int i = 0; i < 6; ++i) {
		cout << x+i << endl;
	}
	for (int i = 0; i < 6; ++i) {
		cout << x[i] << endl;
	}


}
