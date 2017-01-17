#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	int numsLength = nums.size();
	int i = 0;

 recheck:
	if(i < numsLength) {
		if(nums[i] == val) {
			nums.erase(nums.begin()+i);
			numsLength--;
			goto recheck;
		}
		else {
			i++;
			goto recheck;
		}
	}

	return numsLength;
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
