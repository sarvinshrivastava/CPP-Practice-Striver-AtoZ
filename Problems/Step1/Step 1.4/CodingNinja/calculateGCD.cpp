#include <iostream>

using namespace std;

int calGCD(int a, int b) {
      if(a != b) {
            int min = (a < b) ? a : b;

            cout << "Min: "<< min << "\n";
            while(a % min != 0 && b % min != 0) {
                  //cout << min << '\t';
                  min--;
            }
      
            return min;
      }
      else {
            return a;
      }
}

int main() {
      int p, q;

      cin >> p >> q;
      cout << calGCD(p, q);
      
      return 0;
}