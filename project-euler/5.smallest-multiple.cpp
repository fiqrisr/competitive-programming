/* URL https://projecteuler.net/problem=5 */

#include <iostream>
#include <limits>

using namespace std;

int main() {
  int result = 0;

  for (int i = 20; i < numeric_limits<uint>::max(); i++) {
    bool found = true;

    for (int j = 20; j > 0; j--) {
      if (i % j != 0) {
        found = false;
        break;
      }
    }

    if (found) {
      result = i;
      break;
    }
  }

  cout << result << endl;
  return 0;
}
