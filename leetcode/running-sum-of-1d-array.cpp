/* URL: https://leetcode.com/problems/running-sum-of-1d-array */

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> res = {};

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
                res.push_back(nums[i]);
            else
                res.push_back(nums[i] + res[i - 1]);
        }

        return res;
    }
};
