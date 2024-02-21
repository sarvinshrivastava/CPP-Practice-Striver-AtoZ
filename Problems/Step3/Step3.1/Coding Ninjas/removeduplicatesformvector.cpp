#include <set>

int removeDuplicates(vector<int> &arr, int n) {
	set <int> s (arr.begin(), arr.end());
	int a = s.size();
	s.clear();
	return a;
}

