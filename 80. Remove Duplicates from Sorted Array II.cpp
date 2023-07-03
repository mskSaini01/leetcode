class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int beg = 0;
        for(auto x : nums) {
            if(beg < 2 || x > nums[beg-2])
                nums[beg++] = x;
        }
        return beg;
    }
};