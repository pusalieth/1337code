#include <iostream>

using namespace std;

bool isHappy(int n) {
	int cycles = 0;
	int num = 0;
	int temp;

 repeat:
	temp = 0;
	while (n > 0) {
		temp = n%10;
		temp *= temp;
		num += temp;
		n /= 10;
	}
	
	if (num > 1) {
		cycles++;
		n = num;
		num = 0;
		if (cycles > 5) {
			return false;
		}
		goto repeat;
	}

	return true;
}

int main() {
	int num = 0;

	while(1) {
		cin >> num;
		cout << isHappy(num) << endl;
	}
}
