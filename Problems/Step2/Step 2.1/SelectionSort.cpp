void selectionSort(vector<int>&arr) {
    int i, j, min_idx; 
    
    for (i = 0; i < arr.size() - 1; i++) { 
        min_idx = i; 
        for (j = i + 1; j < arr.size(); j++) { 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        } 
        if (min_idx != i) 
            swap(arr[min_idx], arr[i]); 
    }
}