#include <iostream>
#include <cmath>
using namespace std;

float computeEx(float x, int n);

int main() {

	float x = 0;
	int n = 0;

	cout << "Enter your base number followed by the exponent:" << endl;
	cin >> x;
	cin >> n;

	computeEx(x, n);

	return 0;
}

float computeEx(float x, int n) {

	int count = 0;
    
	if (n == 1) {
		return x;
	}
}