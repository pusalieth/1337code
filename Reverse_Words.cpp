#include <iostream>
#include <vector>
#include <string>

using namespace std;

void reverseWords(string &s) {
    string temp;
    int length = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            s[i] = '\0';
            cout << (int)s[i];
        }
    }
}

int main() {
    string s = "    ";

    reverseWords(s);

    cout << "\"" << s << "\"" << endl;
}
