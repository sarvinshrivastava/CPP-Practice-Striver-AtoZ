vector<int> countFrequency(int n, int x, vector<int> &nums){
    // unordered_map <int, int> m;
    
    vector <int> vec (n, 0);

    for(auto it = nums.begin(); it < nums.end(); it++) {
        if(*it - 1 <= n) 
            vec[*it - 1] += 1;
    }

    return vec;
}