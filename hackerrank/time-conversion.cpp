/* URL:
 * https://www.hackerrank.com/challenges/one-month-preparation-kit-time-conversion/problem
 */

#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
  int hour = stoi(s.substr(0, 2));
  string ampm = s.substr(8, 2);

  if (ampm == "AM" && hour == 12)
    s.replace(0, 2, "00");
  if (ampm == "PM" && hour < 12) {
    int ab = hour + 12;
    s.replace(0, 2, to_string(ab));
  }

  s.erase(8, 2);
  return s;
}
