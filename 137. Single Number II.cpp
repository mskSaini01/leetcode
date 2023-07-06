class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        
        // By Bit Manipulation 
        int ones = 0;
        int twos = 0;
        for(auto ele: nums)
        {
            ones = (ones^ele) & (~twos);
            twos = (twos^ele) & (~ones);
        }
        return ones;

        // // By counting number of set bits at each position for all elements 
        // int res = 0;
        // for(int i = 0; i < 32; i++) {
        //     int sum = 0;
        //     for(int j = 0 ; j < nums.size(); j++) {
        //         sum += ((nums[j]>>i)&1);
        //     }
        //     sum %= 3;
        //     res |= (sum<<i);
        // }
        // return res;
    }
};