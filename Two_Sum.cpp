#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int searchFor = 0;
    int index = 0;
    int compare = 0;
    int left = 0;
    int right = 0;
    vector<int> ans;

    if (target < 20) {
        int searchLength = 0;
        while (1) {
            searchFor = target-nums[index];
            searchLength = nums.size()-index;

            for (int i = 1; i <= searchLength; i++) {
                //cout << nums[index] << endl << nums[i] << endl << searchFor << endl << searchLength << endl << endl;
                compare = index+i;
                if (nums[compare] == searchFor) {
                    //cout << "entered if\n";
                    //cout << nums[index] << endl << nums[compare] << endl << searchFor << endl << searchLength << endl << endl;
                    ans.push_back(index+1);
                    ans.push_back(compare+1);
                    goto finish1;
                }
            }

            index++;
        }

    finish1:
        if (ans[0] > ans[1]) {
            int temp = 0;
            temp = ans[0];
            ans[0] = ans[1];
            ans[1] = temp;
        }

        return ans;
    }

    else {
        while (1) {
            searchFor = target-nums[index];
            left = index;
            right = nums.size();
            //cout << "looping1\n";

    binarySearch:
            //cout << "looping2\n";
            compare = (left+right)/2;
            if (compare == left) {
                goto nextIndex;
            }
            else if (nums[compare] == searchFor) {
                //cout << nums[index] << endl << nums[compare] << endl << index << endl << compare << endl;
                ans.push_back(index+1);
                ans.push_back(compare+1);
                goto finish2;
            }
            else if (nums[compare] < searchFor) {
                //cout << "its this one\n";
                left = compare;
                goto binarySearch;
            }
            else {
                //cout << "its this two\n";
                right = compare;
                goto binarySearch;
            }

    nextIndex:
            index++;
            /*
            if (index > nums.size()) {
                cout << "target not found\n";
                goto finish2;
            }*/
        }

    finish2:
        if (ans[0] > ans[1]) {
            int temp = 0;
            temp = ans[0];
            ans[0] = ans[1];
            ans[1] = temp;
        }
    }

    return ans;
}

int main() {
	vector<int> nums;
	int target = 101;
	vector<int> ans;
	int length = 446;
	int input[446] = {572,815,387,418,434,530,376,190,196,74,830,561,973,771,640,37,539,369,327,51,623,575,988,44,659,48,22,776,487,873,486,169,499,82,128,31,386,691,553,848,968,874,692,404,463,285,745,631,304,271,40,921,733,56,883,517,99,580,55,81,232,971,561,683,806,994,823,219,315,564,997,976,158,208,851,206,101,989,542,985,940,116,153,47,806,944,337,903,712,138,236,777,630,912,22,140,525,270,997,763,812,597,806,423,869,926,344,494,858,519,389,627,517,964,74,432,730,843,673,985,819,397,607,34,948,648,43,212,950,235,995,76,439,614,203,313,180,760,210,813,920,229,615,730,359,863,678,43,293,978,305,106,797,769,3,700,945,135,430,965,762,479,152,121,935,809,101,271,428,608,8,983,758,662,755,190,632,792,789,174,869,622,885,626,310,128,233,82,223,339,771,741,227,131,85,51,361,343,641,568,922,145,256,177,329,959,991,293,850,858,76,291,134,254,956,971,718,391,336,899,206,642,254,851,274,239,538,418,21,232,706,275,615,568,714,234,567,994,368,54,744,498,380,594,415,286,260,582,522,795,261,437,292,887,405,293,946,678,686,682,501,238,245,380,218,591,722,519,770,359,340,215,151,368,356,795,91,250,413,970,37,941,356,648,594,513,484,364,484,909,292,501,59,982,686,827,461,60,557,178,952,218,634,785,251,290,156,300,711,322,570,820,191,755,429,950,18,917,905,905,126,790,638,94,857,235,889,611,605,203,859,749,874,530,727,764,197,537,951,919,24,341,334,505,796,619,492,295,380,128,533,600,160,51,249,5,837,905,747,505,82,158,687,507,339,575,206,28,29,91,459,118,284,995,544,3,154,89,840,364,682,700,143,173,216,290,733,525,399,574,693,500,189,590,529,972,378,299,461,866,326,43,711,460,426,947,391,536,26,579,304,852,158,621,683,901,237,22,225,59,52,798,262,754,649,504,861,472,480,570,347,891,956,347,31,784,581,668,127,628,962,698,191,313,714,893};

    /*
    for (int i = 0; i < 16022; i++) {
        if (input[i] == 893)
            cout << i << endl;
    }/*/

	for (int i = 0; i < length; i++) {
        nums.push_back(input[i]);
	}

	ans = twoSum(nums, target);

    for (int i = 0; i < 2; i++){
        cout << ans[i] << endl;
    }
}
