/* URL:
 * https://www.hackerrank.com/challenges/one-month-preparation-kit-the-birthday-bar/problem
 */

#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m) {
  int count = 0;

  for (int i = 0; i < s.size(); i++) {
    int sum = 0;

    for (int j = i; j < s.size(); j++) {
      sum += s[j];

      if (sum == d && (j - i + 1) == m)
        count++;
    }
  }

  return count;
}
