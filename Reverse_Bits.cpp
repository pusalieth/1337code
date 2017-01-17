#include <iostream>
#include <stdint.h>

using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t nSize = (sizeof(n) * 8);
    uint32_t temp, i, ans = 0;

    for(i = 0; i < nSize; i++) {
        temp = (n&(1<<i));
        if (temp) {
            ans |= (1 << ((nSize-1) - i));
        }
    }

    return ans;
}

int main() {
    cout << reverseBits(1) << endl;
}
