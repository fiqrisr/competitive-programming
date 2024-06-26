/* URL https://projecteuler.net/problem=2 */

#include <iostream>

using namespace std;

int main() {
  int a = 0, b = 1, next = 0, sum = 0;

  while (next < 4000000) {
    next = a + b;
    a = b;
    b = next;

    if (next % 2 == 0)
      sum += next;
  }

  cout << sum << endl;
  return 0;
}
