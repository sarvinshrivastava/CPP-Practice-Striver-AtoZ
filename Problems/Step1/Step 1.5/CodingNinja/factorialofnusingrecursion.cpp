vector <long long> factorialNumbers(long long n) {
    vector <long long> v;
    long long temp = 1;
    int i = 2;
    do {
        if (temp <= n) {
            v.insert(v.end(), temp);
            temp *= i;
            i++;
        }
        else {
            return v;
        }
    } while (1);
}