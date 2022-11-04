class Solution {
    public:
        int lengthOfLongestSubstring(std::string s) {
            std::unordered_map<char, int> char_count;

            int j = 0;
            int max = 0;

            for (int i = 0; i < s.length(); i++) {
                while (j < s.length() && char_count[s[j]] < 1) {
                    char_count[s[j]]++;
                    j++;
                }
                max = std::max(max, j - i);
                char_count[s[i]]--;
            }
            return max;
        }
    };
