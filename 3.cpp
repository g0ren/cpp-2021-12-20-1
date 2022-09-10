#include <iostream>
using namespace std;

int main() {
	const string months[12] = { "January", "February", "March", "April", "May",
			"June", "July", "August", "September", "October", "November",
			"December" };
	int income[12];
	int start { 0 }, end { 0 }, max { 0 }, max_month { 0 };
	for (int i = 0; i < 12; i++) {
		cout << "Enter the income in " << months[i] << " ($): ";
		cin >> income[i];
	}
	cout << endl;
	cout << "Enter the starting month (as number): ";
	cin >> start;
	start--;
	cout << "Enter the ending month (as number): ";
	cin >> end;
	end--;
	max = income[start];
	max_month = start;
	for (int i = start + 1; i <= end; i++) {
		if (income[i] > max) {
			max = income[i];
			max_month = i;
		}
	}
	cout << "Within the given period between " << months[start] << " and "
			<< months[end] << " the maximum income was acheived in "
			<< months[max_month] << " with $" << max << endl;

	return 0;
}
