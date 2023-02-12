#include <iostream>


float computeEx(float x, int n, int &count);
void TowerofHanoi(char source, char destination, char spare, int n);
void Problem1();
void Problem3();

int main() {
	
	Problem3();

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

void Problem3() {
	char source;
	char destination;
	char spare;
	int n = 0;

	std::cout << "Enter the number of discs:" << std::endl;
	std::cin >> n;

	std::cout << "The sequence of moves involved in the Tower of Hanoi are:" << std::endl;

	TowerofHanoi(source, destination, spare, n);
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

void TowerofHanoi(char source, char destination, char spare, int n) {

	if (n == 1) {
		std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
	}

	else {

		TowerofHanoi(spare, destination, source, n - 1);
	}
}