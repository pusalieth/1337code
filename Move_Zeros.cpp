#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int numsLength = nums.size();
    int zeros = 0;

    for (int i = 0; i < numsLength; i++) {
    cout << nums[i] << endl;
        if (nums[i] == 0) {
            zeros++;
            nums.erase(nums.begin()+i);
            numsLength--;
            i--;
        }
    }

    for (int i = 0; i < zeros; i++) {
        nums.push_back(0);
    }

    cout << endl << endl;
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
