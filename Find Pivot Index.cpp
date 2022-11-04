class Solution {
    public:
        int pivotIndex(std::vector<int>& nums) {
            std::vector<int> backwardPrefix(nums.size());
            std::vector<int> forwardPrefix(nums.size());
            int size = nums.size();
            
            forwardPrefix[0] = 0;
            for (int i = 1; i < size; i++) 
                forwardPrefix[i] = forwardPrefix[i - 1] + nums[i - 1];
            

            backwardPrefix[size - 1] = 0;
            for (int i = size - 2; i >= 0; i--) 
                backwardPrefix[i] = backwardPrefix[i + 1] + nums[i + 1];
            
            for (int i = 0; i < nums.size(); i++)
                if (backwardPrefix[i] == forwardPrefix[i])
                    return i;


            return -1;
        }
    };
