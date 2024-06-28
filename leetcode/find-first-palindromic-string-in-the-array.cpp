/* URL: https://leetcode.com/problems/find-first-palindromic-string-in-the-array
 */

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != s[s.size() - 1 - i])
        return false;
    }

    return true;
  }

  string firstPalindrome(vector<string> &words) {
    string res = "";

    for (int i = 0; i < words.size(); i++) {
      if (isPalindrome(words[i])) {
        res = words[i];
        break;
      }
    }
    return res;
  }
};
