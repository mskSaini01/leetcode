class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int n = nums.size();
        int left = 0, sum = 0, right = 0;
        int res = INT_MAX;

        while(right < n){
            sum += nums[right];
            while(sum >= target && left < n){
                    res = min(res, right-left + 1);
                sum -= nums[left++];
            }
            right++;
        }
        if(res != INT_MAX)
            return res;
        return 0;
    }
};