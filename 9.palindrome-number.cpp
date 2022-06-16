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
        bool res = true;
        if (x > 0)
        {
            int N = log10(x);
            int *digits = new int[N / 2 + 1];

            for (size_t i = 0; i < N + 1; i++)
            {
                int aux = x % 10;
                if (i <= N / 2)
                    digits[i] = aux;
                else if (aux != digits[N - i])
                {
                    res = false;
                }
                x = x / 10;
            }

            delete[] digits;
        }
        else if (x < 0)
        {
            res = false;
        }
        return res;
    }
};
// @lc code=end
