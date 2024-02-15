vector<int> reverseArray(int n, vector<int> &nums) {
    int st = 0, en = n - 1, temp;
    while (st < en) {
        temp = nums[st];
        nums[st] = nums[en];
        nums[en] = temp;
        st++;
        en--;
    }
    return nums;
}
