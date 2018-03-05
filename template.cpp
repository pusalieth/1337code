#include <iostream>
#include <vector>

using namespace std;

void reverseWords(string &s) {
    string temp;
    int length = 0;
    for(int i = s.size(); i >= 0 ; i--) {
        if(s[i] == ' ') {
            for(int a = i; a < length; a++) {
                temp += s[i];
            }
        } else {
           length++;
        }
    }
    s = temp;
}

int main() {
    int arrayLength = 10;
	vector<int> nums;
	int myArray[10] = {4,2,4,0,0,3,0,5,1,0};

	for (int i = 0; i < arrayLength; i++) {
        nums.push_back(myArray[i]);
	}

	moveZeroes(nums);

	for (int i = 0; i < arrayLength; i++) {
        cout << nums[i] << endl;
	}
}
