/* URL https://projecteuler.net/problem=6 */

#include <iostream>

using namespace std;

int main() {
  int sum1 = (100 * 101 * 201) / 6;
  int sum2 = (100 * 101) / 2;
  int result = sum2 * sum2 - sum1;

  cout << result << endl;
  return 0;
}
