#include <iostream>
#include <vector>

using namespace std;

vector<int> countBits(int num) {
    vector<int> array;

    for(int i = 0; i<= num; i++) {
        int iter = 0;
        int temp = i;
        while(temp > 0) {
            if(temp&1 == 1) {
                iter++;
                temp >>= 1;
            }
            else {
                temp >>= 1;
            }
        }
        array.push_back(iter);
    }

    return array;
}

int main() {
    int num = 6;
    vector<int> nums;

    nums = countBits(num);

    cout << endl;
    for (int i = 0; i <= nums.size()-1; i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
}
