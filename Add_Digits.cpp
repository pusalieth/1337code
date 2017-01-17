#include <iostream>
#include <vector>

using namespace std;

// First Try
// loop
int addDigits1(int num) {
	int sum = 0;
	vector<int> array;
	do{
		array.push_back(num%10);
		num /= 10;
	} while  (num > 0);
	for (int i = 0; i < array.size();i++) {
		sum += array[i];
	}
	if (sum >= 10)
		sum = addDigits1(sum);
	return sum;
}

// ans = ((n-1)mod9)+1
int addDigits2(int num) {
	num--;
	num %= 9;
	num++;
	return num;
}

int main() {
	int num = 110;

	// single line math equation 1+((num - 1)%9)
	cout << addDigits1(num) << endl;
	num = 19;
	cout << addDigits2(num) << endl;
}
