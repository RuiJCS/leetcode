/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    size_t find_index_of_value(vector<int>::iterator &iter1, int &val2, vector<int> &nums)
    {
        vector<int>::iterator iter2 = find(iter1 + 1, nums.end(), val2);
        return distance(nums.begin(), iter2);
    }

    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res = {-1, -1};
        size_t index = 0;
        for (auto it = nums.begin(); it < nums.end(); ++it, index++)
        {
            int val = target - *it;
            auto val_index = find_index_of_value(it, val, nums);
            if (val_index != nums.size())
            {
                res[0] = static_cast<int>(index);
                res[1] = static_cast<int>(val_index);
                break;
            }
        }

        return res;
    }
};
// @lc code=end
