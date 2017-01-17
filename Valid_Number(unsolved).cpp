#include <iostream>
#include <string>

using namespace std;

bool isNumber(string s) {
	// int s[i] >= 48 && s[i] <= 57
	// float s[i] == 46
	// hex s[i] >= 97 && s[i] <= 102

	int i = 0;

	if(s.size() == 0) {
        //cout << "first if check\n";
        return false;
	}

numCheck:
	if ((s[i] >= 48 && s[i] <= 57)) {
        //cout << "first if depth 1 check\n";
        int sSize = s.size();

repeatCheck:
        while ((s[i] >= 48 && s[i] <= 57) && i < sSize) {
            i++;
        }

        if (i == sSize) {
            return true;
        }
        // hexCheck
        else if (s[i] >= 97 && s[i] <= 102) {
            i++;
            goto repeatCheck;
        }
        // floatCheck
        else if (s[i] == 46) {
            i++;
            while ((s[i] >= 48 && s[i] <= 57) && i < sSize) {
                i++;
            }

            if (i == sSize) {
                return true;
            }
            else {
                return false;
            }
        }
        else if (s[i] == 32) {
            i++;
            while (s[i] == 32 && i < sSize) {
                i++;
            }

            if (i == sSize) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
	}
	else if (s[i] == 32) {
        //cout << "second if depth 1 check\n";
        int sSize = s.size();

        while (s[i] == 32 && i < sSize) {
            i++;
        }

        if (i == sSize) {
            return false;
        }
        else {
            goto numCheck;
        }
	}
	else if (s[i] == 46) {
        //cout << "third if depth 1 check\n";
        i++;
        goto numCheck;
	}
	else {
        return false;
	}
}

int main() {
    string s = "0e";

    cout << isNumber(s) << endl;
}
