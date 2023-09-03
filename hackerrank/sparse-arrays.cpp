/* URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sparse-arrays/problem */

#include <bits/stdc++.h>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    unordered_map<string, int> count;
    vector<int> result(queries.size(), 0);

    for (int i = 0; i < strings.size(); i++)
    {
        if (count.find(strings[i]) != count.end())
            count[strings[i]] += 1;
        else
            count[strings[i]] = 1;
    }

    for (int i = 0; i < queries.size(); i++)
    {
        result[i] = count[queries[i]];
    }

    return result;
}
