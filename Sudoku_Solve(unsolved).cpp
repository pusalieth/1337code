#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
/*
void solveSudoku(vector< vector<char> >& board) {
	int itX = 0;
	int itY = 0;
	int numSearch = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3, x++) {
			if (board[x+itX][y+itY] == numSearch) {
			}
		}
	}
}
*/

int main() {
	string numbers = "..9748...,7........,.2.1.9...,..7...24.,.64.1.59.,.98...3..,...8.3.2.,........6,...2759..";
	vector< vector<char> >board(9,vector<char>(9));

	char z = 0;
	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 9; x++) {
			while (numbers[z] == ',')
				z++;
			board[x][y] = numbers[z];
			z++;
		}
	}


	for (int y = 0; y < 9; y++) {
		if (y%3 == 0)
			cout << setfill('-') << setw(25) << "" << endl;
		for (int x = 0; x < 9; x++) {
			if (x%3 == 0)
				cout << '|';
			if (x == 0 || x == 3 || x == 6)
				cout << " ";
			cout << board[x][y] << " ";
		}
		cout << '|' << endl;
	}
	cout << setfill('-') << setw(25) << "" << endl;
}
