/* URL: https://www.hackerrank.com/challenges/the-hurdle-race/problem */

#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector<int> height)
{
    int tallest = height[0];

    for (int i = 1; i < height.size(); i++)
    {
        if (height[i] > tallest)
            tallest = height[i];
    }

    int result = tallest - k;

    if (result < 0)
        return 0;

    return result;
}
