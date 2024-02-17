vector<int> fun(vector<int> v, int x) {
      if(x == 1){
            v.push_back(x);
            return v;
      }
      else {
            v = fun(v, x - 1);
            v.push_back(x);
            return v;
      }
}

vector<int> printNos(int x) {
      vector<int> v;
      return fun(v, x);
}