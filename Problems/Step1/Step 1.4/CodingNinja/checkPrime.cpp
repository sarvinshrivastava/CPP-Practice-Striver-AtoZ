#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
	if(n >= 2) {
            int i = 2;
            for( ; i < sqrt(n); i++) {
                  if(n % i == 0) return false;
            }
            return true;
      }
      else {
            return false;
      }
}


int main() {
      int n;

      cout << isPrime(n);
}