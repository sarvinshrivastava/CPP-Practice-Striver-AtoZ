#include <bits/stdc++.h> 

vector<int> rotateArray(vector<int>& arr, int n) {
    int r_rotations = n - 1, index = 0, last_index_value = arr[index], temp;
    
    do {
        index = (index + r_rotations) % n;

        temp = arr[index];
        arr[index] = last_index_value;
        last_index_value = temp;        
    } while (index != 0);

    return arr;
}
