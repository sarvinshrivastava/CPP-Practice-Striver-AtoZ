class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1, key = nums[0], temp;
        for (int i = 1; i < nums.size(); i++) {
            if(key == nums[i]) {
                nums.erase(nums.begin() + i);
                continue;
            }
            else {
                k++;
                key = nums[i];
            }
        }
        return k;
    }
};