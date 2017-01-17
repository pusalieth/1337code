#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
  i = 1
  v = 5
  x = 10
  l = 50
  c = 100
  d = 500
  m = 1000
*/

int romanToInt(string s) {
	int sNum[100];
	for (int i = 0; i < s.size(); i++) {
		switch (s[i]) {
		case 'I':
			sNum[i] = 1;
			break;
		case 'V':
			sNum[i] = 5;
			break;
		case 'X':
			sNum[i] = 10;
			break;
		case 'L':
			sNum[i] = 50;
			break;
		case 'C':
			sNum[i] = 100;
			break;
		case 'D':
			sNum[i] = 500;
			break;
		case 'M':
			sNum[i] = 1000;
			break;
		default:
			cout << "No case availabe\n";
			break;
		}	
	}
        
	int answer = 0;
	for (int i = 0; i < s.size(); i++) {
		if (sNum[i] < sNum[i+1] && (i+1) < s.size()) {
			int r = 1;
			cout << answer << endl;
			answer -= sNum[i];
			cout << answer << endl;
			while (sNum[i] == sNum[i-r] && (i-r) > 0) {
				cout << "true" << endl;
                answer -= sNum[i-r];
                r++;
			}
			i++;
		}
		cout << sNum[i] << endl;
		answer += sNum[i];
	}
	return answer;
}

int main() {
	string romNum = "IX";

	cout << romanToInt(romNum) << endl;
}
