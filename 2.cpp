#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

int main() {
	srand(time(NULL));
	const int size { 10 };
	unsigned int arr[size];
	unsigned int threshold { 0 };
	unsigned long sum { 0 };
	cout << "Enter the threshold value (between 0 and " << RAND_MAX << "): ";
	cin >> threshold;

	for (int i = 0; i < size; i++) {
		arr[i] = rand();
		if (arr[i] < threshold)
			sum += arr[i];
		cout << arr[i] << endl;
	}
	cout << endl;
	cout << "Sum of all values less than " << threshold << " is " << sum;

	return 0;
}
