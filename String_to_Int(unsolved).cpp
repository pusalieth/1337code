#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int myAtoi(string str) {
    double atoi = 0;
    string new_str = "";

    // if str is empty return 0
    if(str == "") {
        return 0;
    }
    

    int breaks = 0;
    int max_length = 0;
    for(int i = str.size(); i >= 0; i--) {
        if(str[i] == '+' || str[i] == '-') {
            breaks++;
        }
        max_length++;
    }

    int nums[max_length][breaks];
}

int main() {
    string str = "+-2";

    cout << myAtoi(str) << endl;
}
