class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int start = nums.size() - 2;
    
        while(start >= 0 && nums[start + 1] <= nums[start])
            start--;
        
        if(start >= 0){
            int end = nums.size() - 1;
            while(nums[end] <= nums[start])
                end--;
            
            std::swap(nums[start], nums[end]);
            std::reverse(nums.begin() + start + 1, nums.end());
        }
        else
            std::reverse(nums.begin(), nums.end());
        
    }
};
