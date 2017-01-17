#include <iostream>
#include <stdint.h>

using namespace std;

// 4ms, 25.54%
int hammingWeight(uint32_t n) {
        uint32_t ans = 0;
        uint32_t temp = 0;

        temp = n;
        do {
            temp /= 2;
            ans += temp;
            //cout << ans << endl;
        } while (temp > 0);

        ans = n-ans;

        return ans;
}

int main() {
    int num = 2147483648;// (10000000000000000000000000000000)

    cout << hammingWeight(num) << endl;
}
