class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int global = nums[0];
        int local = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            local = max(nums[i], nums[i] + local);
            global = max(global, local);
        }
        return global;
    }
};