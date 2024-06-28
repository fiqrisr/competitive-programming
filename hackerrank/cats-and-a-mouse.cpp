
/* URL:
 * https://www.hackerrank.com/challenges/one-month-preparation-kit-countingsort1/problem
 */

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

string catAndMouse(int x, int y, int z) {
  int catADistance = abs(z - x);
  int catBDistance = abs(z - y);

  if (catADistance > catBDistance)
    return "Cat B";
  else if (catBDistance > catADistance)
    return "Cat B";
  else
    return "Mouse C";
}
