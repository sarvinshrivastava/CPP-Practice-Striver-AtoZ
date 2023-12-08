#include <iostream>
#include <math.h>

using namespace std;

long unsigned reverseBits(long n) {
      int binary[32], j = 32, i = 0;
      long unsigned num = 0;

      // initilizing array with 0
      for (; j; j--)
            binary[j] = 0;

      // convering into 32 bit binary
      while(n > 0) {
            binary[i] = n % 2;
            n /= 2;
            i++;
      }

      // reversing and converting back to decimal
      i = 31;
      for(j = 0; j < 32; j++) {
            num += binary[j] * pow(2, i); 
            i--;
      }

      return num;
}

int main() {
      long n;
      cin >> n;
      cout << '\n' << reverseBits(n);

      return 0;
}