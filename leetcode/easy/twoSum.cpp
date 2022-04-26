#include <iterator>
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        auto dataSize = std::size(nums);
        for (int i = 0; i < dataSize - 1; i++)
        {
            for (int j = i + 1; j < dataSize; j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return nums;
    }
};