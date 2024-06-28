/* URL https://projecteuler.net/problem=4 */

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
  string str = to_string(num);
  string revStr = str;
  reverse(revStr.begin(), revStr.end());
  return str == revStr;
}

int main() {
  int max = 0;

  for (int i = 999; i >= 100; --i) {
    for (int j = i; j >= 100; --j) {
      int product = i * j;

      if (isPalindrome(product) && product > max)
        max = product;
    }
  }

  cout << max << endl;
  return 0;
}
