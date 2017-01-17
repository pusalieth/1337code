#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int myAtoi(string str) {
    double atoi = 0;
    string new_str = "";

    // if str is empty return 0
    if(str == "" || str == "+" || str == "-") {
        return 0;
    }

    // if str is negative skip symbol and keep number
    bool neg = false;
    if(str[0] == 45) {
        neg = true;
        for(int i = 1; i < str.size(); i++) {
            if(str[i] > 57 || str[i] < 48) {}
            else {
                new_str += str[i];
            }
        }
    }
    // else str is positive or no numbers
    else {
        for(int i = 0; i < str.size(); i++) {
            if(str[i] > 57 || str[i] < 48) {}
            else {
                new_str += str[i];
            }
        }
    }

    cout << new_str << "    " << new_str.size() << endl;

    // format str to int
    for(int i = 0; i < new_str.size(); i++) {
        int compound = new_str.size()-(i+1);
        int temp = new_str[i]-48;
        cout << "str[i]: " << new_str[i] << " i: " << i << " compound: " << compound << " temp: " << temp << endl;
        atoi += pow(10,compound)*temp;
        cout << atoi << endl;
    }

    if(neg) {
        atoi *= -1;
    }

    return atoi;
}

int main() {
    string str = "+-2";
    int result = 0;

    result = myAtoi(str);

    cout << result << endl;
}
