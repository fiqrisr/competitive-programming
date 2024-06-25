/* URL: https://leetcode.com/problems/longest-common-prefix */

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        vector<char> result = {};
        int index = strs[0].size();

        for (int i = 0; i < strs.size(); i++)
        {
            for (int j = 0; j < index; j++)
            {
                if (i == 0)
                    result.push_back(strs[i][j]);

                if (strs[i][j] != result[j])
                    index = j;
            }
        }

        return string(result.begin(), result.begin() + index);
    }
};
