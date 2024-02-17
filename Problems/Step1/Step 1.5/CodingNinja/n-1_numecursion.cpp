vector<int> printNos(int x) {
	if(x == 0) {
            exit(0);
    }
    printf("%d ", x);  
    printNos(x -1);
}