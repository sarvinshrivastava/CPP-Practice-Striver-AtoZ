#include <iostream>

using namespace std;

// int calcGCD(int a, int b) {
//       if(a != b) {
//             int min = (a < b) ? a : b;

//             while(min > 0) {
//                   // cout << (a % min) << " " << (b % min)  << " " << "min: " << min << '\n';
//                   if(a % min == 0 && b % min == 0) {
//                         break;
//                   }
//                   min--;
//             }
      
//             return min;
//       }
//       else {
//             return a;
//       }
// }


int calcGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
      int p, q;

      cin >> p >> q;
      // cout << p << " " << q << '\n';
      cout << calcGCD(p, q);
      
      return 0;
}