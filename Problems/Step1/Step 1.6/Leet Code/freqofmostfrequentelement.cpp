#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int max_f = -999, curr_f, temp;
    int possibility_function(vector<int>& num, int k) {
        int k_left = k;
        for(auto it = num.end() - 1; it > num.begin(); --it){
            temp = *it - *(it - 1);
            if(temp == k){
                curr_f = 2;
                max_f = (max_f < curr_f) ? max_f : curr_f;
            }
            else if (temp < k) {
                curr_f = 2;
                int i = 0;
                do {
                    k_left = k - (*it - *(it - 1 - i));
                    curr_f++;
                    i++;
                } while(k_left > 0 && i < num.size() - 1);
                max_f = (max_f < curr_f) ? max_f : curr_f;
            }
        }
        return max_f;
    }

    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return possibility_function(nums, k);
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 4};
    int k = 5;
    cout << s.maxFrequency(nums, k) << endl;
    return 0;
}