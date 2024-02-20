#include <algorithm>

vector<int> getSecondOrderElements(int n, vector<int> a) {
    sort(a.begin(), a.end());
    vector<int> res = {a[n-2], a[1]};
    return res;
}
