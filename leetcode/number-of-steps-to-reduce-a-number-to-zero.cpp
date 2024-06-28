/* URL: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero
 */

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numberOfSteps(int num) {
    long temp = num;
    long step = 0;

    while (temp > 0) {
      step++;

      if (num % 2 == 0)
        temp /= 2;
      else
        temp -= 1;
    }

    return step;
  }
};
