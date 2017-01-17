#include <iostream>
#include <vector>
#include <string>

using namespace std;

string reverse_string(string s) {
    int s_size = s.size();
    int s_half = s_size/2;
    int j = 0;
    for(int i = s_size-1; i >= s_half; i--) {
        char temp = s[i];
        s[i] = s[j];
        s[j++] = temp;
    }

    return s;
}

int main() {
    string word = "test";
    cout << "Original word is " << word << "\t" << reverse_string(word) << endl;
}
