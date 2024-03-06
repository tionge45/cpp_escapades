#include <iostream>

int linearSearch(int* myArray, int n, int key) {
	for (int i = 0; i < n; i++)
		if (myArray[i] == key)
			return i;
	return -1;
}

int main() {

	int n = 10;
	int* myArray = new int[n] {1, 4, 6, 7, 8, 12, 3, 90, 67, 43};

	int key;
	std::cout << "Enter number to search: " << std::endl;
	std::cin >> key;

	int foundResult = linearSearch(myArray, n, key );

	std::cout << "Number found at index: " << foundResult << std::endl;

	delete[] myArray;
}