/* URL:
 * https://www.hackerrank.com/challenges/one-month-preparation-kit-plus-minus/problem
 */

#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
  vector<int> result(3, 0);

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > 0)
      result[0] += 1;
    if (arr[i] < 0)
      result[1] += 1;
    if (arr[i] == 0)
      result[2] += 1;
  }

  for (int i = 0; i < result.size(); i++) {
    float ratio = float(result[i]) / arr.size();

    cout << ratio << setprecision(6) << fixed << endl;
  }
}
