#include<iostream>
#include <iomanip>
#include<cstdlib>
#include<ctime>
#include<stdexcept>
#include <cmath>
using namespace std;

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

//causes undefined behavior
int getX(int y) {
	if (y > 0) {
		return 1;
	}
	if (y < 0) {
		return -1;
	}
}

double effective_rate(double annual_rate, int num_times_compounded = 0) {
	if (num_times_compounded == 0) {
		return exp(1);
	}
	
	return 0;
}

void drawBoard(char board[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}

void updateBoard(char board[10][10], int x, int y, int oldX, int oldY) {
	board[x][y] = 'o';
	board[oldX][oldY] = 'x';
}

bool outOfBounds(int x, int y) {
	if (x < 0 || x > 9 || y < 0 || y > 9)
		return true;
	else
		return false;
}
int main(){
	int seed = static_cast<int>(time(NULL));
	// sets the random number seed to that int
	srand(seed);
	/*
	cout << effective_rate(5) << endl;
	cout << effective_rate(5, 1) << endl;
	cout << getX(0) << endl; 
	cout << max(5,7) << endl; 
	cout << max(7,5) << endl; 
	cout << max(5,5) << endl; 
	*/
	char board[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			board[i][j] = ' ';
		}
	}
	int playerX = 5;
	int playerY = 5;
	board[playerX][playerY] = 'O';
	for (int i = 0; i < 100; i++) {
		drawBoard(board);
		//updatePlayerPosition(playerX, playerY);
		int outcome = rand() % 4;
		int oldPlayerX = playerX;
		int oldPlayerY = playerY;
		//THIS SHOULD BE A FUNCTION! (requires passing by reference)
		if (outcome == 0) {
			playerY++;
		}
		else if (outcome == 1) {
			playerX++;
		}
		else if (outcome == 2) {
			playerY--;
		}
		else if (outcome == 3) {
			playerX--;
		}
		if (outOfBounds(playerX, playerY)) {
			cout << "Game over" << endl;
			break;
		}
		updateBoard(board, playerX, playerY, oldPlayerX, oldPlayerY);
		string dummy;
		getline(cin, dummy);
	}
	drawBoard(board);

	return 0;
}


