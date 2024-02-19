vector<int> getFrequencies(vector<int>& v) {
    unordered_map <int, int> m;

    for(auto it = v.begin(); it < v.end(); it++) {
        if(m.count(*it) == 1) {
            m[*it] += 1;
        }
        else {
            m.emplace(*it, 1);
        }
    }

    // for (auto x = m.begin(); x != m.end(); ++x) {
    //     cout << x -> first << "  " << x -> second << "\n";
    // }

    int min = 999, min_num, max = -999, max_num;
    for(auto i = m.begin(); i != m.end(); ++i) {
        if(min > i -> second) {
            min = i -> second;
            min_num = i -> first;
        }
        else if(min == i -> second) {
            min_num = (min_num < i -> first) ? min_num : i -> first;
        }
        if(max < i -> second) {
            max = i -> second;
            max_num = i -> first;
        }
        else if(max == i -> second) {
            max_num = (max_num < i -> first) ? max_num : i -> first;
        }
    }
    
    return {max_num, min_num};
    
}
