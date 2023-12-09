#include <iostream>

using namespace std;

int countDigits(int n){
	int count = 0, key = n;

      while(n) {
            int dig = n % 10;
            n /= 10;
            if(key % dig == 0) 
                  count++;
      }

      return count;
}

int main() {
      int n;
      cin >> n;
      cout << countDigits(n);

      return 0;
}