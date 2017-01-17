#include <iostream>
#include <vector>

using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    vector<int> numsFound;

    for (int i = 0; i < nums.size(); i++) {
        bool found = false;
        for (int s = i+1; s < nums.size(); s++) {
            cout << nums[s] << ",";
            if(nums[i] == nums[s]) {
                nums.erase(nums.begin()+s);
                found = true;
                nums.pop_back();
                cout << endl << "erased s: " << nums[s] << endl;
            }
            cout << nums[s] << ",";
        }
        if(found) {
            nums.erase(nums.begin()+i);
            cout << endl << "erased i: " << nums[i] << endl;
        }
        cout << endl << nums[i] << endl;
        numsFound.push_back(nums[i]);
    }

    return numsFound;
}

int main() {
    int arrayLength = 10;
	vector<int> nums;
	int myArray[10] = {1,2,1,3,2,5};

	for (int i = 0; i < arrayLength; i++) {
        nums.push_back(myArray[i]);
	}

	//2,3,5,1
	nums = singleNumber(nums);

	for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << ",";
	}
	cout << endl;
}
