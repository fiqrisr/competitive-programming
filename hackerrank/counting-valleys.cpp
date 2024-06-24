/* URL: https://www.hackerrank.com/challenges/counting-valleys */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int countingValleys(int steps, string path)
{
    int count = 0;
    int current = 0;

    for (int i = 0; i < path.size(); i++)
    {
        int temp = current;

        if (path[i] == 'U')
            current += 1;
        else
            current -= 1;

        if (temp < 0 && current >= 0)
            count++;
    }

    return count;
}
