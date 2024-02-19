#include <iostream>
using namespace std;

int main() {
	int n, sum_o = 0, sum_e = 0, dig;
	
      cin >> n;
      while(n > 0) {
            dig = n % 10;
            n = n / 10;

            if(dig % 2 != 0) {
                  sum_o += dig;
            }
            else {
                  sum_e += dig;
            }
      }
      cout << sum_e << ' ' << sum_o;
}
