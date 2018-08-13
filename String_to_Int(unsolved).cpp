#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int myAtoi(string str) {
  string new_str = "";

  // if str is empty return 0
  if (str == "") {
    return 0;
  }

  vector<vector<int>> row;
  vector<int> column;
  for (int i = str.size() - 1; i >= 0; i--) {
    if (str[i] == '+' || str[i] == '-') {
      row.push_back(column);
      vector<int> column;
      column.push_back(str[i]);
    } else {
      column.push_back(str[i]);
    }
  }

  for(int x = 0; x < row.size(); x++) {
      for(int y = 0; y < column.size(); y++) {
          cout << row[x][y];
      }
      cout << endl;
  }

  return 0;
}

int main() {
  string str = "+-2";

  cout << myAtoi(str) << endl;
}
