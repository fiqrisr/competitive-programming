/* URL: https://leetcode.com/problems/roman-to-integer */

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int i = 0;
        int result = 0;

        while (i < s.size())
        {
            if (roman[s[i]] < roman[s[i + 1]] && i < s.size() - 1)
            {
                result += roman[s[i + 1]] - roman[s[i]];
                i += 2;
            }
            else
            {
                result += roman[s[i]];
                i++;
            }
        }

        return result;
    }
};
