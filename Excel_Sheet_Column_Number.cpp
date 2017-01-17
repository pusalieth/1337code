#include <iostream>

using namespace std;

int titleToNumber(string s) {
	int ans = 1;
	int stringSize = s.size()-1;
        
	for(int i = 0; i <= stringSize; i++) {
		s[i] -= 64;
		if (i == 0) {
			ans *= s[i];
		}
		else {
			ans *= 26;
			ans += s[i];
		}
	}
        
	return ans;
}

int main() {
	string s = "DFC";

	cout << titleToNumber(s) << endl;
}
