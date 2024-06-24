/* URL: https://leetcode.com/problems/day-of-the-programmer */

#include <bits/stdc++.h>

using namespace std;

bool isLeap(int year)
{
    if (year < 1919 && year % 4 == 0)
        return true;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;

    return false;
}

string dayOfProgrammer(int year)
{
    int date;
    bool isLeapYear = isLeap(year);

    if (isLeapYear)
        date = 12;
    else
        date = 13;

    if (year == 1918)
        date += 13;

    return to_string(date) + ".09." + to_string(year);
}
