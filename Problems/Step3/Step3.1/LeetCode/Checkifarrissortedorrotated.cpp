class Solution {
public:
    bool check(vector<int>& nums) {
        int key = nums[0];
        auto it = nums.begin();
        if(is_sorted(nums.begin(), nums.end()) == 0) {
            if(nums[0] < nums[nums.size()-1]){
                return false;
            }
        }
        else {
            return true;
        }

        for ( ; it != nums.end() - 1; ++it) {
            if(key <= *(it + 1)) {
                key = *(it + 1);
            }
            else {
                break;
            }
        }
        if (is_sorted(it + 1, nums.end()) == 1)
            return true;
        else
            return false;
    }
};