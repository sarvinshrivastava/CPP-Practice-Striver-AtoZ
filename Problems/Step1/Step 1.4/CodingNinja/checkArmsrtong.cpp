#include <iostream>
#include <math.h>

using namespace std;

bool checkArmstrong(int n) {
      int sum = 0, temp = n;
      int digitsCount = 0;
      
      while (temp){
            digitsCount++;
            temp /= 10;
      }

      temp = n;
      while(n) {
            sum += pow(n % 10, digitsCount);
            n /= 10;
      }

      if (sum == temp) return true;
      else return false;
}

 int main() {
      // int n;
      
      // cin >> n;
      // cout << checkArmstrong(n);

      for (int i = 0; i < 1000; i++) {
            if (checkArmstrong(i) == true) {
                  cout << i << "\n";
            }
      }
 }