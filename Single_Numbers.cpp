#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int singleNumber(vector<int>& nums) {
    int occurance = 0;

    for (int i = 0; i < nums.size(); i++) {
        occurance ^= nums[i];
    }

    return occurance;
}

int main() {
    int arrayLength = 21;
	vector<int> nums;
	int myArray[21] = {17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,-4,15,15,-4,-5,-6};

    /*
    for (int i = 0; i < arrayLength; i++) {
        if (myArray[i] == 1264)
            cout << i+1 << endl;
    }*/

	for (int i = 0; i < arrayLength; i++) {
        nums.push_back(myArray[i]);
	}

	cout << singleNumber(nums) << endl;
}
