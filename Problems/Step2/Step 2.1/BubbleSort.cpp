void bubbleSort(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
                flag++;
            }
        }
        if(flag == 0) {
            break;
        }
        else {
            flag = 0;
        }
    }
}