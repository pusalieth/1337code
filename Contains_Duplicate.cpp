#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    if(nums.size() == 0 || nums.size() == 1) {
        return false;
    }

    sort(nums.begin(),nums.end());

    int i = 0;

recheck:
    while(i < nums.size()) {
        if(nums[i] != nums[i+1]) {
            i++;
            goto recheck;
        }
        else {
            return true;
        }
    }
    return false;
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
