vector<string> printNTimes(int n) {
	if(n == 0) {
		exit(0);
	}
	else {
		printf("Coding Ninjas ");
		printNTimes(n-1);
	}
}