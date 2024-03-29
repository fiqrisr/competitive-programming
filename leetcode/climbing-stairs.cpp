/* URL: https://leetcode.com/problems/climbing-stairs */

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0 || n == 1)
            return n;

        int prev = 1;
        int sum = 1;

        for (int i = 2; i <= n; i++)
        {
            int temp = sum;
            sum += prev;
            prev = temp;
        }

        return sum;
    }
};
