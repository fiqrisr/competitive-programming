/* URL: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies */

#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int n) {
  int rev = 0;

  while (n > 0) {
    rev = rev * 10 + n % 10;
    n = n / 10;
  }

  return rev;
}

int beautifulDays(int i, int j, int k) {
  int count = 0;

  for (int s = i; s <= j; s++) {
    if (abs(reverseNumber(s) - s) % k == 0)
      count++;
  }

  return count;
}
