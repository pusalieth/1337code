#include <iostream>
#include <stdint.h>

using namespace std;

uint32_t rangeBitwiseAnd(uint32_t m, uint32_t n) {
    uint32_t lsb = 1;
    uint32_t temp = 0;

    temp = m;
    while(temp > 0) {
        temp >>= 1;
        lsb <<= 1;
    }
    cout << lsb << endl;

    if (n > lsb) {
        return 0;
    }

    uint32_t ans = m;
    m++;

    while(m<=n) {
        ans &= m;
        cout << m << endl;
        if (ans == 0) {
            return 0;
        }
        m++;
    }

    return ans;
}

int main() {
    cout << rangeBitwiseAnd(2147483646,2147483647) << endl;
}
