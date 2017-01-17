#include <iostream>

using namespace std;

bool canWinNim(int n) {
	if (n%4 == 0)
		return false;
	else
		return true;
}

int main() {
    int n = 10;

	if (canWinNim(n))
		cout << "true\n";
	else
		cout << "false\n";
}
