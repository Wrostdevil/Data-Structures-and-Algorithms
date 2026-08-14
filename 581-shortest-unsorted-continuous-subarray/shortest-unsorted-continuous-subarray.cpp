class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> res = nums;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left=n,right=-1;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (res[i] != nums[i]) {
                left = min(left, i);
                right = max(right, i);
            }
        }

        // Already sorted
        if (right == -1) {
            return 0;
        }

        return right - left + 1;
    }
};