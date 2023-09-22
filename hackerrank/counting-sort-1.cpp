/* URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-countingsort1/problem */

#include <bits/stdc++.h>

using namespace std;

vector<int> countingSort(vector<int> arr)
{
    vector<int> result(100, 0);

    for (int i = 0; i < arr.size(); i++)
    {
        result[arr[i]]++;
    }

    return result;
}
