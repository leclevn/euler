int main() {
	int N = 1000; // input
	int sum = 0;  // output
	
	int n = N - 1;
	int n3 = n / 3;
	int n5 = n / 5;
	int n15 = n / 15;
	int i;
	for (int i = 1; i <= n3; i++) {
		sum += i*3;
		if (i <= n5) {
			sum += i*5;
			if (i <= n15) {
				sum -= i*15;
			}
		}
	}	
	cout << sum;
	return 0;
}
