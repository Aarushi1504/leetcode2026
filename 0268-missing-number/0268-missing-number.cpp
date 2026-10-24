class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1=0, sum2 = 0;
        for (int i = 0; i <= n; i++) {
            sum1+= i;
        }
        int x;
        for (int i = 0; i < n; i++) {
            sum2 += nums[i];
        }
        x = sum1 - sum2;
        return x;
    }
};