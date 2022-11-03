class Solution {
    private:
        int maxsum(std::vector<int>& sums, int len1, int len2) {
            int sum1 = sums[len1 - 1], sum2;
            int max = sums[len1 + len2 - 1];

            for (int i = 0; i < sums.size() - (len1 + len2); i++) {
                sum2 = sums[len1 + len2 + i] - sums[len1 + i];
                sum1 = std::max(sum1, sums[len1 + i] - sums[i]);
                max = std::max(max, sum1 + sum2);
            }
            return max;
        }

    public:
        int maxSumTwoNoOverlap(std::vector<int>& nums, int firstLen, int secondLen) {
            std::vector<int> prefix(nums.size());

            for (int i = 0; i < nums.size(); i++) {
                if (i != 0)
                    prefix[i] = prefix[i - 1] + nums[i];
                else
                    prefix[i] = nums[i];
            }

            int posssum1 = maxsum(prefix, firstLen, secondLen);
            int posssum2 = maxsum(prefix, secondLen, firstLen);
           
            return std::max(posssum1,posssum2);
        }
    };
