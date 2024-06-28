/* URL:
 * https://www.hackerrank.com/challenges/one-month-preparation-kit-diagonal-difference/problem
 */

#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
  int diagonalLength = arr[0].size();
  int ltr = 0;
  int rtl = 0;

  for (int i = 0; i < diagonalLength; i++) {
    ltr += arr[i][i];
    rtl += arr[i][diagonalLength - i - 1];
  }

  return abs(ltr - rtl);
}
