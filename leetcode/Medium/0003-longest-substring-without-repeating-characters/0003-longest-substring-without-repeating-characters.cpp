class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> charIndexMap;
        int maxLength = 0;
        int start = 0;

        for (int end = 0; end < s.length(); ++end) {
            if (charIndexMap.find(s[end]) != charIndexMap.end()) {
                // 중복 문자가 발견된 경우, 시작 포인터를 이전 인덱스 + 1로 이동
                start = std::max(start, charIndexMap[s[end]] + 1);
            }
            // 현재 문자의 위치를 해시 맵에 업데이트
            charIndexMap[s[end]] = end;
            // 현재 부분 문자열의 최대 길이를 업데이트
            maxLength = std::max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};