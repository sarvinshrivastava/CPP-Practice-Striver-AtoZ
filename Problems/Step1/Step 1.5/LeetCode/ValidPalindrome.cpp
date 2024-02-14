#include <cstring>

class Solution {
public:
    bool isPalindrome(string s) {
        string new_str = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                new_str.insert(new_str.end(), s[i] + 32);
            }
            else if(s[i] >= 'a' && s[i] <= 'z') {
                new_str.insert(new_str.end(), s[i]);
            }
            else if(s[i] >= '0' && s[i] <= '9') {
                new_str.insert(new_str.end(), s[i]);
            }
        }

        int j = new_str.size() - 1;
        for(int i = 0; i < new_str.size(); i++) {
            if(new_str[i] != new_str[j]) {
                return false;
            }
            j--;
        }
        return true;
    }
};