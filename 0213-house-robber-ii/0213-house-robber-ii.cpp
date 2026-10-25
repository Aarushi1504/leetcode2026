class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n <= 3) {
            return *max_element(nums.begin(), nums.end());
        }
        int a = nums[0];
        int b = max(nums[0], nums[1]);

        for(int i = 2; i < n-1; i++) {
            int c = max(b, a + nums[i]);
            a = b;
            b = c;
        }

        int ans1 = b;

        // First house excluded, last included
        a = nums[1];
        b = max(nums[1], nums[2]);

        for(int i = 3; i < n; i++) {
            int c = max(b, a + nums[i]);
            a = b;
            b = c;
        }

        int ans2 = b;

        return max(ans1, ans2);
    }
};