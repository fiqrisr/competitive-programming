/* URL: https://leetcode.com/problems/running-sum-of-1d-array */

#include <bits/stdc++.h>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> parentheses;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                parentheses.push(s[i]);
            else
            {
                if (!parentheses.size())
                    return false;

                char opening = parentheses.top();

                if (opening == '(' && s[i] == ')' ||
                    opening == '{' && s[i] == '}' ||
                    opening == '[' && s[i] == ']')
                    parentheses.pop();
                else
                    return false;
            }
        }

        if (parentheses.size())
            return false;

        return true;
    }
};
