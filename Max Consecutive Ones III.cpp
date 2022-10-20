class Solution {
    public:
        int longestOnes(std::vector<int>& nums, int k) {
            //stores the numbers of times 1 and 0 occur with in the current window
            //0 count stored at [0] and 1 count stored at [1]
            int count = { 0 };
            
            int left = 0;
            int max = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0)
                    count++;
                if (count <= k)
                    max = std::max(max, i - left + 1);
                else {
                    while (count > k && left < i) {
                        if (nums[left] == 0)
                            count--;
                        left++;
                    }
                }
            }
            return max;
        }
    };
