/* URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sparse-arrays/problem */

#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector<int> a)
{
    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {
        ans ^= a[i];
    }

    return ans;
}
