#include <iostream>
#include <vector>

using namespace std;

int adder(int A, int B) {
    int sum = A^B;
    int carry = A&B;
    cout << sum << endl;
    cout << carry << endl;
    carry <<= 1;
    cout << carry << endl << endl;

    if (carry == 0)
        return sum;
    else
        return adder(sum,carry);
}

int sub(int A, int B) {
}

int getSum(int a, int b) {
    int sum = adder(a,b);

    return sum;
}

int main() {
    int a = -5;
    int b = 10;
    cout << "sum algorithum: " << getSum(a,b) << endl;
    cout << "sum true: " << a+b << endl;
}
