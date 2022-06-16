/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int initial_x = x;
        uint32_t x_aux = 0;
        while (x > 0)
        {
            x_aux = x_aux * 10 + x % 10;
            x = x / 10;
        }

        return x_aux == initial_x;
    }
};
// @lc code=end
