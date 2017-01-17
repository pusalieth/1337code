#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calculate(string s) {
	vector<int> temp;
	vector<int> marker;
	int ans = 0;

	for(int i = 0; i < s.size();i++) {
		if (s[i] == 42 || s[i] == 47) {
			marker.push_back(i);
			cout << "marker: " << marker.back() << endl;
		}
	}
	cout << "marker: " << marker.back() << endl;

	for(int i = 0; i < s.size();i++) {
		temp.push_back(s[i]);
		temp[i] -= 48;
		if (i == marker.back()) {
			temp[i] += 6;
			switch(temp[i]) {
			case 0:
				ans += temp[i-1]*temp[i+1];
				temp.pop_back();
				temp.pop_back();
				temp.pop_back();
				break;
			case 1:
				ans += temp[i-1]+temp[i+1];
				temp.pop_back();
				temp.pop_back();
				temp.pop_back();
				break;
			case 3:
				ans += temp[i-1]-temp[i+1];
				temp.pop_back();
				temp.pop_back();
				temp.pop_back();
				break;
			case 5:
				ans += temp[i-1]/temp[i+1];
				temp.pop_back();
				temp.pop_back();
				temp.pop_back();
				break;
			}
			marker.pop_back();
		}
		cout << temp[i] << endl;
	}

	return ans;
}

int main() {
	string input = "3+2*2";

	while(1) {
		cin >> input;
		cout << calculate(input) << endl;
	}
}
