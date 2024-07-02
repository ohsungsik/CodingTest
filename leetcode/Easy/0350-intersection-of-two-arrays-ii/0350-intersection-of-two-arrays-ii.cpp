class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        for (const auto& num : nums1)
        {
            auto it = find(nums2.begin(), nums2.end(), num);
            if (it == nums2.end())
                continue;

            answer.push_back(num);
            nums2.erase(it);
        }

        return answer;
    }
};