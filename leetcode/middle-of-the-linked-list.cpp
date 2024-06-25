/* URL: https://leetcode.com/problems/middle-of-the-linked-list */

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *mid = head;
        ListNode *end = head;

        while (end != NULL && end->next != NULL)
        {
            mid = mid->next;
            end = end->next->next;
        }

        return mid;
    }
};
