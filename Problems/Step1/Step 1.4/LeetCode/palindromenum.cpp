#include <iostream>

using namespace std;

bool isPalindrome(int x) {
      int rev = 0, ori = x;

      while(x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
      }
      if(rev == ori)
            return true;
      else
            return false;
}

int main() {
      int x;
      
      cin >> x;
      cout << isPalindrome(x);

      return 0;
}