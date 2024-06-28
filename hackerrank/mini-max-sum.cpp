/* URL:
 * https://www.hackerrank.com/challenges/one-month-preparation-kit-mini-max-sum/problem
 */

#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {
  long min = arr[0];
  long max = arr[0];
  long sum = 0;

  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];

    if (arr[i] < min)
      min = arr[i];
    if (arr[i] > max)
      max = arr[i];
  }

  long minSum = sum - max;
  long maxSum = sum - min;

  cout << minSum << " " << maxSum << endl;
}
