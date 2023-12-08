#include<iostream>

using namespace std;

long long reverse(long long x) {
    long long rev = 0;

    while (x) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return rev;
}

int main() {
    long long n;

    cin >> n;
    cout << reverse(n);
    
    return 0;
}