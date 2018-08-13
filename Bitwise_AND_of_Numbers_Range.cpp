#include <iostream>
#include <stdint.h>

using namespace std;

uint32_t rangeBitwiseAnd(uint32_t m, uint32_t n) {
  uint32_t temp = m;
  uint32_t lsb = 1;
  while (temp > 0) {
    temp >>= 1;
    lsb <<= 1;
  }
  if (n > lsb)
    return 0;

  uint32_t ans;
  for (ans = m++; m <= n && ans; m++) {
    ans &= m;
  }

  return ans;
}

int main() { cout << rangeBitwiseAnd(2147483646, 2147483647) << endl; }
