#include<bits/stdc++.h>
using namespace std;

int main() {
      int a = 1, b = 1, c, n; 

      cin >> n;

      if(n >= 3) {
            for(int i = 3; i <= n; i++) {
                  c = a + b;
                  a = b;
                  b = c;
                  //cout << c << '\t';
            }
            cout << c;
      }
      else {
            cout << "1";
      }
}