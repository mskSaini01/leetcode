class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        // Sliding Window
        int left = 0;
        int zeros = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) {
                zeros++;
            }
            while (zeros > 1) {
                if (nums[left] == 0) {
                    zeros--;
                }
                left++;
            }
            ans = max(ans, right - left + 1 - zeros);
        }
        return (ans == n) ? ans - 1 : ans;

        // // Prefix Sum
        // vector<int> left(nums.size(), 0);
        // vector<int> right(nums.size(), 0);
        // for(int i = 1; i < n ; i++) {
        //     if(nums[i-1] == 1) {
        //         left[i] = left[i-1] + 1;
        //     }
        // }
        // for(int i = n-2; i >= 0; i--) {
        //     if(nums[i+1] == 1) {
        //         right[i] = right[i+1] + 1;
        //     }
        // }
        // int res = 0;
        // for(int i = 1; i < n ; i++) {
        //     res = max(res, left[i]+right[i]);
        // }
        // return res;
    }
};