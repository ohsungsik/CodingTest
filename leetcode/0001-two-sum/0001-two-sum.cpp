class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            size_t rhs = static_cast<size_t>(target) - nums[i];
            for (size_t j = i + 1; j < nums.size(); j++)
            {
                if (static_cast<size_t>(nums[j]) == rhs)
                    return {static_cast<int>(i), static_cast<int>(j)};
            }
        }
        
        return {0, 0};
    }
};