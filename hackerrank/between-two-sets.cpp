/* URL: https://www.hackerrank.com/challenges/between-two-sets */

#include <bits/stdc++.h>

using namespace std;

int getGCD(int n1, int n2)
{
    if (n2 == 0)
        return n1;

    return getGCD(n2, n1 % n2);
}

int getLCM(int n1, int n2)
{
    if (n1 == 0 || n2 == 0)
        return 0;

    int gcd = getGCD(n1, n2);
    return abs(n1 * n2) / gcd;
}

int getTotalX(vector<int> a, vector<int> b)
{
    int res = 0;
    int lcm = a[0];
    int gcd = b[0];

    for (int i = 0; i < a.size(); i++)
    {
        lcm = getLCM(lcm, a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        gcd = getGCD(gcd, b[i]);
    }

    int multiple = 0;

    while (multiple <= gcd)
    {
        multiple += lcm;

        if (gcd % multiple == 0)
            res++;
    }

    return res;
}
