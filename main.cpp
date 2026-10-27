#include <iostream>

// Lab 9 — Joshua Van Brunt
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

double average(const int a[], int n) {
	if (n == 0) {
		return 0.0;
	}
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return static_cast<double>(sum) / n;
}

void printSummary(double avg) {
    std::cout << "Average: " << avg << std::endl;
}



void printMenu() {
	for (int i = 0; i < 50; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	
	std::cout << "1) Average" << std::endl;
	std::cout << "2) High" << std::endl;
	std::cout << "3) Exit" << std::endl;
}

int getHigh(const int a[], int n) {
	if (n == 0) {
		return 0;
	}
	int high = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > high) {
			high = a[i];
		}
	}
	return high;
}
int main() {
	std::cout << "Welcome to the Average Calculator!" << std::endl;
	int choice = 0;
	while (choice != 3) {
		printMenu();
		std::cout << "Please select an option: ";
		std::cin >> choice;

		if (choice == 1) {
			const int N = 4;
			int scores[N] = { 80, 90, 70, 100 };

			double avg = average(scores, N);
			printSummary(avg);
		}
		else if (choice == 2) {
			const int N = 4;
			int scores[N] = { 80, 90, 70, 100 };
			int high = getHigh(scores, N);
			std::cout << "High: " << high << std::endl;
		}
		else if (choice == 3) {
			std::cout << "Exiting..." << std::endl;
		}
		else {
			std::cout << "Invalid option." << std::endl;
		}

	}
}

