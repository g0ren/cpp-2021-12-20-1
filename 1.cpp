#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

int main() {
	srand(time(NULL));
	const int size { 10 };
	int arr[size];
	int min { RAND_MAX }, max { 0 };
	for (int i = 0; i < size; i++) {
		arr[i] = rand();
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
		cout << arr[i] << endl;
	}
	cout << endl;
	cout << "Minimum value is " << min << endl;
	cout << "Maximum value is " << max << endl;

	return 0;
}
