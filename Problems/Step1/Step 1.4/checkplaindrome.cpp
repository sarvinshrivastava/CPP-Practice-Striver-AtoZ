#include <iostream>

using namespace std;

bool palindrome(int n) {
      int reverse = 0, original = n;
      while (n != 0) {
            reverse = reverse * 10 + n % 10;
            n = n / 10;
      }
      return (original == reverse) ? true : false;
}

int main() {
      int n;
      cin >> n;
      cout << palindrome(n);

      return 0;
}