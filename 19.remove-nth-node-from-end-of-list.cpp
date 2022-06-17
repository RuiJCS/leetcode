/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    pair<ListNode *, int> runThroughList(ListNode *current, int n)
    {
        if (current == nullptr)
        {
            return pair{current, 0};
        }
        else
        {
            pair<ListNode *, int> next = runThroughList(current->next, n);
            int index = ++next.second;
            if (index == n)
            {
                delete current;
            }
            else
            {
                current->next = next.first;
                next.first = current;
            }
            return next;
        }
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        return runThroughList(head, n).first;
    }
};
// @lc code=end
