/* URL: https://www.hackerrank.com/challenges/electronics-shop/problem */

#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int res = -1;

    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            if (keyboards[i] + drives[j] <= b && keyboards[i] + drives[j] > res)
                res = keyboards[i] + drives[j];
        }
    }

    return res;
}
