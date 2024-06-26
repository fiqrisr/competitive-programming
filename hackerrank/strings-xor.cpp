/* URL:
 * https://www.hackerrank.com/challenges/one-month-preparation-kit-strings-xor/problem
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

string strings_xor(string s, string t) {

  string res = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == t[i])
      res += '0';
    else
      res += '1';
  }

  return res;
}

int main() {
  string s, t;
  cin >> s >> t;
  cout << strings_xor(s, t) << endl;
  return 0;
}
