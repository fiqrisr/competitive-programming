/* URL: https://leetcode.com/problems/ransom-note */

#include <bits/stdc++.h>
#include <map>

using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    map<char, int> letters;
    bool res = true;

    for (int i = 0; i < magazine.size(); i++) {
      if (letters[magazine[i]])
        letters[magazine[i]] += 1;
      else
        letters[magazine[i]] = 1;
    }

    for (int i = 0; i < ransomNote.size(); i++) {
      if (letters[ransomNote[i]] == 0)
        return false;

      letters[ransomNote[i]] -= 1;
    }

    return res;
  }
};
