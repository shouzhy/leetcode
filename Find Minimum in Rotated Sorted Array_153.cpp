class Solution {
public:
    int findMin(vector<int>& nums) {
        int l, r, m;
        l = 0;
        r = nums.size() - 1;
        m = (l + r) / 2;
        while(l < r){
            if(nums[m] < nums[r] && nums[m] < nums[nums.size() - 1]){
                r = m - 1;
                m = (l + r) / 2;
            }
            else{
                l = m + 1;
                m = (l + r) / 2;
            }
        }
        if(nums[l] <= nums[nums.size() - 1]) return nums[l];
        else return nums[l + 1];
    }
};
