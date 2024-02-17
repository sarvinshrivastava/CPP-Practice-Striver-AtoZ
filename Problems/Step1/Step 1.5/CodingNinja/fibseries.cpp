vector<int> reccursiveFib(vector<int> v, int n) {
    if(n == 0) {
        return v;
    }
    else {
        int sum = v[v.size() - 1] + v[v.size() - 2];
        v.push_back(sum);
        return reccursiveFib(v, n - 1);
    }
}

vector<int> generateFibonacciNumbers(int n) {
  vector <int> vec = {0, 1};
  if(n >= 2) {
      return reccursiveFib(vec, n - 2);
  }
  else {
      return {0};
  }
}