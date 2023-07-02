class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int beg = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] != val) {
                nums[beg++] = nums[i];
            }
        }
        return beg;
    }
};