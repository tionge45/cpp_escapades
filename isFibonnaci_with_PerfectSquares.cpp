#include <iostream>
#include <cmath>

bool isPerfectSquare(int x) {
	int s = sqrt(x);
	return(s * s == x);
}

int countFibonacci(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isPerfectSquare(5 * arr[i] * arr[i] + 4) || isPerfectSquare(5 * arr[i] * arr[i] - 4)){
			 count++;
		}
	}

	return count;
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	std::cout << countFibonacci(arr, n);

	return 0;
}