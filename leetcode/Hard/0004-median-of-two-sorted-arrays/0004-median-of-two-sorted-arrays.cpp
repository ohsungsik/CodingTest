class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for (const auto& num : nums1)
        {
            nums2.emplace_back(num);
        }

        std::sort(nums2.begin(), nums2.end());

        if (nums2.size() % 2 == 0)
        {
            return (nums2[static_cast<double>(nums2.size() / 2)] +
            nums2[static_cast<double>(nums2.size() / 2 - 1)]) / 2.0;
        }

        return nums2[static_cast<double>(nums2.size() / 2)];
    }
};