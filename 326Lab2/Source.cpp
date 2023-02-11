#include <iostream>
using namespace std;

float computeEx(float x, int n, int &count);

int main() {

	float x = 0;
	int n = 0, count = 0;

	cout << "Enter your base number" << endl;
	cin >> x;
	cout << "Enter your exponent" << endl;
	cin >> n;

	cout << x << " raised to the power of " << n << " is " << computeEx(x, n, count) << endl;
	

	return 0;
}

float computeEx(float x, int n, int &count) {
 
	count++;

	if (n == 1) {

		cout << x << " was multiplied " << count << " times" << endl;

		return x;
	}

	else {
		return x * computeEx(x, n - 1, count);
	}
}