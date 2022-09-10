#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	const int min_n { -1000 }, max_n { 1000 }, size { 25 };
	int arr[size];
	int min { max_n }, max { min_n }, i_min { 0 }, i_max { 0 }, negsum { 0 },
			flsum { 0 };
	long long mmproduct { 1 }, evenproduct { 1 };
	int fl[2] = { -1, -1 };
	for (int i = 0; i < size; i++) {
		arr[i] = min_n + rand() % (max_n - min_n + 1);
		if (arr[i] < min) {
			min = arr[i];
			i_min = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			i_min = i;
		}
		if (arr[i] < 0) {
			if (fl[0] == -1)
				fl[0] = i;
			else
				fl[1] = i;
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			negsum += arr[i];
		}
		if ((i > i_min && i < i_max) || (i < i_min && i > i_max)) {
			mmproduct *= arr[i];
		}
		if (!(i % 2)) {
			evenproduct *= arr[i];
		}
		if (i > fl[0] && i < fl[1]) {
			flsum += arr[i];
		}
		cout << "# " << i << ": " << arr[i] << endl;
	}

	cout << endl;
	cout << "Sum of all negative elements: " << negsum << endl;
	cout << "Product of all elements between the minimum value " << min << " (# "
			<< i_min << ") and maximum value " << max << " (# " << i_max << "): "
			<< mmproduct << endl;
	cout << "Product of all elements with even numbers: " << evenproduct
			<< endl;
	cout << "Sum of all elements between the first (# " << fl[0]
			<< ") and the last (# " << fl[1]
			<< ") negative numbers in the array: " << flsum << endl;

	return 0;
}
