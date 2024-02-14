#include <iostream>
#include <vector>

using namespace std;

int a = 1;

// need to decrease the time complexity...

vector<int> printNos(int x)
{
      vector<int> vect;

      if (a == x + 1)
      {
            return vect;
      }
      else
      {
            vect.push_back(a);
            a++;
            vector<int> temp = printNos(x);
            vect.insert(vect.end(), temp.begin(), temp.end());
      }

      return vect;
}

void display(vector<int> &v)
{
      for (auto i : v)
            cout << i << " ";
}

int main()
{
      int n;
      vector<int> vect;

      cin >> n;
      vect = printNos(n);
      display(vect);

      return 0;
}