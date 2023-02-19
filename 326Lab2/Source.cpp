#include <iostream>

float computeEx(float x, int n, int &count);
void insertionSort(int* ptr, int n);
void printArray(int* ptr, int n);
void TowerofHanoi(char source, char destination, char spare, int n);
void Problem1();
void Problem2();
void Problem3();

int main() {
	
	Problem2();

	return 0;
}

void Problem1() {
	
	float x = 0;
	int n = 0, count = 0;

	std::cout << "Enter your base number:" << std::endl;
	std::cin >> x;
	std::cout << "Enter your exponent:" << std::endl;
	std::cin >> n;

	std::cout << x << " raised to the power of " << n << " is " << computeEx(x, n, count) << std::endl;
}

void Problem2() {
	
	int n = 0;

	std::cout << "Enter number of integers to be sorted:" << std::endl;
	std::cin >> n;

	int* ptr = new int[n];

	std::cout << "Enter numbers:" << std::endl;
	
	for (int i = 0; i < n; i++) {
		std::cin >> ptr[i];
	}

	insertionSort(ptr, n);

	printArray(ptr, n);
}

void Problem3() {
	
	char source = 'A';
	char destination = 'B';
	char spare = 'C';
	int n = 0;

	std::cout << "Enter the number of discs:" << std::endl;
	std::cin >> n;

	std::cout << "The sequence of moves involved in the Tower of Hanoi are:" << std::endl;

	TowerofHanoi(source, spare, destination, n);
}

float computeEx(float x, int n, int &count) {
 
	count++;

	if (n == 1) {

		std::cout << x << " was multiplied " << count << " times" << std::endl;

		return x;
	}

	else {
		return x * computeEx(x, n - 1, count);
	}
}

void insertionSort(int* ptr, int n) {

	if (n <= 1) {
		return;
	}

	else {
		insertionSort(ptr, n - 1);

		int end = ptr[n - 1];
		int j = n - 2;

		while (j >= 0 && ptr[j] > end) {

			ptr[j + 1] = ptr[j];
			j--;

		}

		ptr[j + 1] = end;

	}

}

void printArray(int* ptr, int n) {

	for (int i = 0; i < n; i++) {
		std::cout << ptr[i] << " ";
	}

}

void TowerofHanoi(char source, char destination, char spare, int n) {

	if (n == 1) {
		std::cout << "Move disk " << n << " from rod " << source << " to rod " << destination << std::endl;
	}

	else {

		TowerofHanoi(source, spare, destination, n - 1);

		std::cout << "Move disk " << n << " from rod " << source << " to rod " << destination << std::endl;

		TowerofHanoi(spare, destination, source, n - 1);
	}
}