/* URL: https://leetcode.com/problems/palindrome-number */

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0)
      return false;

    string num = to_string(x);

    for (int i = 0; i < num.size() / 2; i++) {
      if (num[i] != num[num.size() - 1 - i])
        return false;
    }

    return true;
  }
};
