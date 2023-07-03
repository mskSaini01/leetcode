class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore Voting Algorithm 
        int n = nums.size();
        int count = 0, max_ele = 0;
        for(int i = 0; i < n; i++) {
            if(count == 0)
                max_ele = nums[i];
            if(nums[i] == max_ele)
                count++;
            else
                count--;
        }
        return max_ele;
    }
};